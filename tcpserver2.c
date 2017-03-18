#include<stdio.h>  // printf scanf 
#include<stdlib.h> // exit
#include<string.h>  // strcpy strlen
#include<sys/socket.h>  // socket 
#include<netinet/in.h>  // struct sockaddr_in 
#include<arpa/inet.h>
#include<wiringPi.h>

int tcp_serv2_init(int serv_port)
{
	int port=serv_port;
	//step1:创建套接字
	int servfd;//套接字 文件描述符
	    //AF_INET :协议族 ip+port  SCOK_STREAM : TCP
	servfd = socket(AF_INET, SOCK_STREAM, 0);  //SOCK_DGRAM  -- UDP
	//step2:绑定地址
	struct sockaddr_in servaddr;
	servaddr.sin_family =AF_INET; 
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY); //192.168.6.200 => 换算成  32位整数   
	servaddr.sin_port = htons(port); //选择一个没人用的端口号  大于1024
	int ret;
	ret = bind(servfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	//ret = bind(servfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	if(ret < 0)
	{
		printf("bind error\n");
		exit(1);  //退出程序
	}
	
	//step3:监听
	listen(servfd, 5);  //把自己变成被动  后面的参数小于20 
	
	return servfd;
}

void led_init()
{
	pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(0,OUTPUT);
    
    
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(0,HIGH);
}

int main()
{
	//网络初始化
	 int servfd = tcp_serv2_init(1234);
	 //硬件初始化
	 wiringPiSetup();
	 //LED初始化
	 led_init();
	 
	//step4 ：等待客户端的连接-- 一直等待
	int newfd; //用于跟连接进来的客户端进行数据收发
	printf("waiting for clint .....\n");
	newfd = accept(servfd, NULL, NULL); //阻塞函数  等待数据接受  如果没有接收到就一直等
	printf("success\n");
	//服务器读
	int str[1024];
	while(1)
	{
	
	read(newfd,str,1024);
	if(str<= 30)
	{
		digitalWrite(8,LOW);
		digitalWrite(9,LOW);
	}
	else if(str > 30)
	{
		digitalWrite(8,HIGH);
		digitalWrite(9,HIGH);
	}
	printf("%s\n",str);
	}
	close(newfd);
	colse(servfd);
	
	return 0;
}
































