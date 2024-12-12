#include<stdio.h>
void main()
{
int i=1, n, fact=1;
//input
printf("Enter n value:");
scanf("%d",&n);
//contition
do
{
 fact=fact*i;
 i++;
}

while(i<=n);
//answer
printf("fact:%d\n",fact);
printf("%d",i);
}
