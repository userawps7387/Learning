#include <stdio.h>
void main()//主函数
{
	int i,a,b;
	printf("请输入正整数Num=");
	scanf("%d",&a);
	b=a;
	i=b%7;
	switch(i)
	{
		case 1:printf("星期一上班\n");break;
		case 2:printf("星期二上班\n");break;
		case 3:printf("星期三上班\n");break;
		case 4:printf("星期四上班\n");break;
		case 5:printf("星期五上班\n");break;
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
			printf(" ");//打印空格让字保持在中间
		for(k=0-j;k<=0;k++)
			printf("方");
		printf("\n");//每行打印完后换行
	}
}
dayinlx()
{
	int j,k,l;
	for(j=0;j<6;j++)//该段循环打印正三角形的“木”
	{
		for(l=5-j;l>0;l--)
			printf(" ");//打印空格让字保持在中间
		for(k=0-j;k<=0;k++)
			printf("木");
		printf("\n");//每行打印完后换行
	}
	for(j=5;j>=0;j--)//该段循环打印反三角形的“木”
	{
		for(l=5-j;l>=0;l--)
			printf(" ");//打印空格让字保持在中间
		for(k=j;k>0;k--)
		{
			printf("木");
		}
		printf("\n");//每行打印完后换行
	}
}