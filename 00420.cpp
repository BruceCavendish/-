#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int y,m,d;//年月日
	int i,k,a,b,c,s,t,u,l;
	int j[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	float f,live=0;//为了算出年的小数位
	for(k=1;k<3;k++)//两个日期循环2次
	{
		printf("输入第%d个日期\n\n年：",k);
		scanf("%d",&y);
		if(1>y)
		{
			printf("\n\t输入错误\n\n");
			system("pause");
			return 0;
		}
		printf("月：");
		scanf("%d",&m);
		if(m>12||m<1)
		{
			printf("\n\t输入错误\n\n");
			system("pause");
			return 0;
		}
		printf("日：");
		scanf("%d",&d);
		j[2]=28;
		l=365;//因为在循环内，计算前做初始化
		if((y%4==0&&y%100!=0)||(y%400==0&&y%3200!=0))//判断是否是闰年
		{
			j[2]=29;
			l=366;
		}
		if(d>j[m]||d<1)
		{
			printf("\n\t输入错误\n\n");
			system("pause");
			return 0;
		}
		t=0;
		for(i=0;i<m;i++)
		{
			t+=j[i];
		}
		t+=d;
		printf("\n\t这是%d年的第%d天\n\n",y,t);
		if(k==1)
		{
			a=y;
			b=m;
			c=d;
			s=t;
			u=l;
		}
	}
	if(y==a&&m==b&&d==c)
	{
		printf("\n\t减 1 S\n\n");
		system("pause");
		return 0;
	}
	if(a>y||(y==a&&b>m)||(y==a&&m==b&&d<c))
	{
		k=a;
		a=y;
		y=k;
		k=s;
		s=t;
		t=k;
		k=u;
		u=l;
		l=k;
	}//较小日期放到a,b,c,仅交换会影响结果的数值
	if(y==a)
	{
		u=0;
	}
	live+=t+u-s;
	f=live/365;
	if(m==b&&d==c)//月、日相同的情况下输出周年
	{
		f=1;
		k=1;
	}
	a++;
	for(a;a<y;a++)
	{
		f++;
		l=365;
		if((a%4==0&&a%100!=0)||(a%400==0&&a%3200!=0))
		{
			l=366;
		}
		live+=l;
	}//计算两个日期之间过了多少年多少天
	printf("\n\t过去了%.f天",live);
	if(k==1)
	{
		printf("\n\n\t%.f周年",f);
	}
	else if(f>=0.1)
	{
		printf("，约%.1f年",f);
	}
	printf("\n\n\n");
	system("pause");
	return 0;
}
