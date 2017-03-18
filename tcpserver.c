#include<stdio.h>  // printf scanf 
#include<stdlib.h> // exit
#include<string.h>  // strcpy strlen
#include<sys/socket.h>  // socket 
#include<netinet/in.h>  // struct sockaddr_in 
#include<arpa/inet.h>



int main()
{
	//step1:创建套接字
	int servfd;//套接字 文件描述符
	    //AF_INET :协议族   SCOK_STREAM : ip+port  TCP
	servfd = socket(AF_INET, SOCK_STREAM, 0);  //SOCK_DGRAM  -- UDP
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
	
	//step3:监听
	listen(servfd, 5);  //把自己变成被动  后面的参数小于20   
	//step4 ：等待客户端的连接-- 一直等待
	int newfd; //用于跟连接进来的客户端进行数据收发
	printf("waiting for clint .....\n");
	newfd = accept(servfd, NULL, NULL); //阻塞函数  等待数据接受  如果没有接收到就一直等
	printf("success\n");
	//服务器读
	char str[1024];
	while(1)
	{
	
	read(newfd,str,1024);
	printf("%s\n",str);
	}
	close(newfd);
	colse(servfd);
	
	return 0;
}