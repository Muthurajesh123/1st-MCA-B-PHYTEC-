//***FACTORIAL***
#include<stdio.h>
void main()
{
  int i, n, fact=1;
// input
     printf("Enter the n value:");
     scanf("%d",&n);
//cont
  for(i=1; i<=n; i++)
  {
    fact=fact*i;
  }
// ans
    printf("fact:%d",fact);
}
