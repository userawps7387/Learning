#include <stdio.h>
void main()//������
{
	int i,a,b;
	printf("������������Num=");
	scanf("%d",&a);
	b=a;
	i=b%7;
	switch(i)
	{
		case 1:printf("����һ�ϰ�\n");break;
		case 2:printf("���ڶ��ϰ�\n");break;
		case 3:printf("�������ϰ�\n");break;
		case 4:printf("�������ϰ�\n");break;
		case 5:printf("�������ϰ�\n");break;
		case 6:dayinsjx();break;
		case 0:dayinlx();break;
		default:break;
	}
}
dayinsjx()
{
	int j,k,l;
	for(j=0;j<6;j++)
	{
		for(l=5-j;l>0;l--)
			printf(" ");//��ӡ�ո����ֱ������м�
		for(k=0-j;k<=0;k++)
			printf("��");
		printf("\n");//ÿ�д�ӡ�����
	}
}
dayinlx()
{
	int j,k,l;
	for(j=0;j<6;j++)//�ö�ѭ����ӡ�������εġ�ľ��
	{
		for(l=5-j;l>0;l--)
			printf(" ");//��ӡ�ո����ֱ������м�
		for(k=0-j;k<=0;k++)
			printf("ľ");
		printf("\n");//ÿ�д�ӡ�����
	}
	for(j=5;j>=0;j--)//�ö�ѭ����ӡ�������εġ�ľ��
	{
		for(l=5-j;l>=0;l--)
			printf(" ");//��ӡ�ո����ֱ������м�
		for(k=j;k>0;k--)
		{
			printf("ľ");
		}
		printf("\n");//ÿ�д�ӡ�����
	}
}