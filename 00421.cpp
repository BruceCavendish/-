#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int y,m,d;
	int i,k,a,b,c,s,t,u,l;
	int j[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	float f,live=0;
	for(k=1;k<3;k++)
	{
		printf("�����%d������\n\n�꣺",k);
		scanf("%d",&y);
		if(1>y)
		{
			printf("\n\t�������\n\n");
			system("pause");
			return 0;
		}
		printf("�£�");
		scanf("%d",&m);
		if(m>12||m<1)
		{
			printf("\n\t�������\n\n");
			system("pause");
			return 0;
		}
		printf("�գ�");
		scanf("%d",&d);
		j[2]=28;
		l=365;
		if((y%4==0&&y%100!=0)||(y%400==0&&y%3200!=0))
		{
			j[2]=29;
			l=366;
		}
		if(d>j[m]||d<1)
		{
			printf("\n\t�������\n\n");
			system("pause");
			return 0;
		}
		t=0;
		for(i=0;i<m;i++)
		{
			t+=j[i];
		}
		t+=d;
		printf("\n\t����%d��ĵ�%d��\n\n",y,t);
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
		printf("\n\t�� 1 S\n\n");
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
	}
	if(y==a)
	{
		u=0;
	}
	live+=t+u-s;
	f=live/365;
	if(m==b&&d==c)
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
	}
	printf("\n\t��ȥ��%.f��",live);
	l=f;
	if(k==1)
		printf("\n\n\t%.f����",f);
	else if((f-l>=0.95||f-l<0.05)&&f>=0.95)
		printf("��Լ%.f��",f);
	else if(f-l>=0.05)
		printf("��Լ%.1f��",f);
	printf("\n\n\n");
	system("pause");
	return 0;
}
