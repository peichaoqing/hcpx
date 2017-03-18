#include<stdio.h>  // printf scanf 
#include<stdlib.h> // exit
#include<string.h>  // strcpy strlen
#include<sys/socket.h>  // socket 
#include<netinet/in.h>  // struct sockaddr_in 
#include<arpa/inet.h>
#include<wiringPi.h>

void csb_init()
{
	pinMode(13,OUTPUT);
	pinMode(14,INPUT);
	
	
	
}

int main()
{
	
	csb_init();
	//step1:创建套接字
	int clientfd;//套接字 文件描述符
	    //AF_INET :协议族 ip+port  SCOK_STREAM : TCP
	clientfd = socket(AF_INET, SOCK_STREAM, 0);  //SOCK_DGRAM  -- UDP
	/*
	//step2:绑定地址
	struct sockaddr_in servaddr;
	servaddr.sin_family =AF_INET; 
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY); //192.168.6.200 => 换算成  32位整数   
	servaddr.sin_port = htons(1234); //选择一个没人用的端口号  大于1024
	int ret;
	ret = bind(servfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	//ret = bind(servfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	if(ret < 0)
	{
		printf("bind error\n");
		exit(1);  //退出程序
	}
	*/    //可有可无  对于客户端来说 步骤2
	
	
	//step3:定义服务器地址，主动建立
	struct sockaddr_in myservaddr;
	myservaddr.sin_family = AF_INET;
	myservaddr.sin_addr.s_addr = inet_addr("127.0.0.1");  //本地还回  把点分十进制转换32位整数
	                           //本机 172.0.0.1  外部机器：192.168.1.×××
	myservaddr.sin_port = htons(1234);
	connect(clientfd,&myservaddr,sizeof(myservaddr));
	
	
	//step4: 客户端写
	int val ;
	int str[1024];
	while(1)
	{
		digitalWrite(13,LOW);
		digitalWrite(13,HIGH);
		delayMicroseconds(10);
		digitalWrite(13,LOW);
		
		struct timeval start,end;
		
		while(1)
		{
			val = digitalRead(14);
			if(val == HIGH)
			{
				printf("start\n");
				break;
			}	
			else
			continue;
		}
		//time1
		gettimeofday(&start,NULL);
		while(1)
		{
			val = digitalRead(14);
			if(val == LOW)
			{
				printf("end\n");
				break;
			}	
			else
			continue;
		}
		//time2
		gettimeofday(&end,NULL);
		
		long t1 = start.tv_sec * 1000000 + start.tv_usec;
		long t2 = end.tv_sec * 1000000 + end.tv_usec;
		
		float dis = (float)(t2-t1)/1000000 * 34000/2;
		printf("%fcm\n",dis);
		delay(2000);
		str = dis;
	   //发给服务器
	write(clientfd,str,strlen(str)+1);
	}
	close(clientfd);
	
	
	
	return 0;
}































