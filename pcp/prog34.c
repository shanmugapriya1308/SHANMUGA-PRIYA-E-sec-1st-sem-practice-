#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
	{
		printf("PASS");
	}
	else
	{
		printf("FAIL");
	}
}	
