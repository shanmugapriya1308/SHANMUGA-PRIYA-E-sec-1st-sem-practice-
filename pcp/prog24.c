#include<stdio.h>
int main()
{
	int price,dis,tot_price;
	scanf("%d %d",&price,&dis);
	dis=price*20/100;
	printf("Total price:%d",price-dis);
	return 0;
} 																				
