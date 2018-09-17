#C004

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y,m,d,ly,lm,ld;
	int a,b,c,i,k,l,s,f,live=0,t=0;
	int j[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	//一月份是不加的，所以放个0
	printf("输入第一个日期\n\t年：");
	scanf("%d",&y);
	printf("\t月：");
	scanf("%d",&m);
	printf("\t日：");
	scanf("%d",&d); 
	printf("输入第二个日期\n\t年：");
	scanf("%d",&ly);
	printf("\t月：");
	scanf("%d",&lm);
	printf("\t日：");
	scanf("%d",&ld);
	if(y>ly||(y==ly&&m>lm)||(y==ly&&m==lm&&d>ld))
	{
		a=ly;
		ly=y;
		y=a;
		b=lm;
		lm=m;
		m=b;
		c=ld;
		ld=d;
		d=c;
	}//较早日期赋值给y,m,d,较晚日期赋值给ly,lm,ld
	else
	{
		a=y;
		b=m;
		c=d;
	}//后面要把ly的值赋给y，存一下
	for(k=0;k<2;k++) //两个日期循环2次
	{
		t=0;
		j[2]=28;
		l=365;
		//循环开始前初始化t,j,l的值
		if((y%4==0&&y%100!=0)||(y%400==0&&y%3200!=0))
		{
			j[2]=29;
			l=366;
		}
		if(m>12||d>j[m]||1>m||1>d||1>y) //因m=12需要参与判断，所以j[]有第13个数
		{
			if(k==1)
			{
				printf("\n\t较晚日期输入错误\n\n");
			}
			else
			{
				printf("\n\t日期输入错误\n\n"); 
			}
			system("pause");
			return 0;
		}
		for(i=0;i<m;i++) //按照输入月份加上前几个月的天数
		{
			t+=j[i];
		}
		t+=d;
		if(k==0)
		{
			if(y==ly&&m==lm&&d==ld)
			{
				printf("\n\t减 1 S\n\n");
				system("pause");
				return 0;
			}	
			s=t;
			live+=l-t;
			y=ly;
			m=lm;
			d=ld;
		}
	}
	live+=t;
	ly=y;
	lm=m;
	ld=d;
	y=a;
	m=b;
	d=c;
	if(y==ly)
	{
		live=t-s;
	}
	a++;
	f=live/365; 
	for(a;a<ly;a++)
	{
		f++;
		l=365;
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			l=366;
		}
		live+=l;
	}
	printf("\n\t从%d年%d月%d日（第%d天）至%d年%d月%d日（第%d天）过去了%d天，满%d年\n\n",y,m,d,s,ly,lm,ld,t,live,f);
	system("pause");
	return 0;
}
