#include<stdio.h>
int main()
{

float a,b,c;
printf("Enter the total  no.of product:");
scanf("%f",&a);

printf("Enter the total amount:");
scanf("%f",&b);

printf("how many product view rate:");
scanf("%f",&c);

if((b/a)*c)
{
printf("%f",(b/a)*c);
}

else
{
printf("invalid");
}
return 0;


}
