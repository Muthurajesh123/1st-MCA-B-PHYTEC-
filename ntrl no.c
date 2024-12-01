//***NATURAL NUMBERS***
#include<stdio.h>
void main()
{
int i=1, n, sum=0;
//input

printf("Enter the n value:");
scanf("%d",&n);
//loop
while(i<=n)
{
 sum=sum+i;
 i++;
}
//ans
printf("sum:%d",sum);
}
