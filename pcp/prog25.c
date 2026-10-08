#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,tot;
	float avg;
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	tot=m1+m2+m3+m4+m5;
	printf("total:%d",tot);
	avg=tot/5;
	printf("Average:%.2f",avg);
	return 0;
}
