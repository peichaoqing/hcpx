#include<stdio.h>  // printf scanf 
#include<stdlib.h> // exit
#include<string.h>  // strcpy strlen
#include<sys/socket.h>  // socket 
#include<netinet/in.h>  // struct sockaddr_in 
#include<arpa/inet.h>



int main()
{
	//step1:�����׽���
	int servfd;//�׽��� �ļ�������
	    //AF_INET :Э����   SCOK_STREAM : ip+port  TCP
	servfd = socket(AF_INET, SOCK_STREAM, 0);  //SOCK_DGRAM  -- UDP
	//step2:�󶨵�ַ
	struct sockaddr_in servaddr;
	servaddr.sin_family =AF_INET; 
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY); //192.168.6.200 => �����  32λ����   
	servaddr.sin_port = htons(1234); //ѡ��һ��û���õĶ˿ں�  ����1024
	int ret;
	ret = bind(servfd,(struct sockaddr *)&servaddr,sizeof(servaddr));
	//ret = bind(servfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	if(ret < 0)
	{
		printf("bind error\n");
		exit(1);  //�˳�����
	}
	
	//step3:����
	listen(servfd, 5);  //���Լ���ɱ���  ����Ĳ���С��20   
	//step4 ���ȴ��ͻ��˵�����-- һֱ�ȴ�
	int newfd; //���ڸ����ӽ����Ŀͻ��˽��������շ�
	printf("waiting for clint .....\n");
	newfd = accept(servfd, NULL, NULL); //��������  �ȴ����ݽ���  ���û�н��յ���һֱ��
	printf("success\n");
	//��������
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