#include<stdio.h>
void main()
{
int n,a;
printf("enter the naumber");
scanf("%d",n);
if(n!=0)
{
a=n%10;
sum=sum+a*a*a;
n=n/10;
printf("it is amstrong");
}
else
{
printf("it is not amstrong");
}
}
