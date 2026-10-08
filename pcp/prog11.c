#include<stdio.h>
int main()
{
int p,n,r,si;
printf("Enter principal value:");
scanf("%d",&p);
printf("Enter no  of years:");
scanf("%d",&n);
printf("Enter rate:");
scanf("%d",&r);
si=p*n*r;
printf("Simple interest:%d",si);
}


