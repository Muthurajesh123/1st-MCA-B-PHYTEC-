#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter the total  no.of product:");
scanf("%d",&a);

printf("Enter the total amount:");
scanf("%d",&b);

printf("how many product view rate:");
scanf("%d",&c);

if((b/a)*c)
{
printf("%d",(b/a)*c);
}

else
{
printf("invalid");
}


}
