//***do while factorial***//
#include<stdio.h>
void main()
{
int i=1, n, fact=1;
//input
printf("Enter n value:");
scanf("%d",&n);
//contition
while(i<=n)
{
 fact=fact*i;
 i++;
}

//answer
printf("fact:%d\n",fact);
printf("%d",i);
}
