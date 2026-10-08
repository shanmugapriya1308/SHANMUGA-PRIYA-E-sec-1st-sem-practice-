#include<stdio.h>
int main()
{
int m1,m2,m3,tot;
float avg;
printf("Enter maths mark:");
scanf("%d",&m1);
printf("Enter physics mark:");
scanf("%d",&m2);
printf("Enter electronics mark:");
scanf("%d",&m3);
tot=m1+m2+m3;
avg=tot/3;
printf("Total:%d",tot);
printf("Average:%.2f",avg);
}

