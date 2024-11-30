#include<stdio.h>
int main()
{
int num1,num2;
char op;

printf("Enter the 1st  num:");
scanf("%d",&num1);

printf("Enter the 2nd num:");
scanf("%d",&num2);

printf("Enter the operator:");
scanf("\n%c",&op);

switch(op)
{

case '+':
printf("add: %d",num1+num2);
break;

case '-':
printf("sub: %d",num1-num2);
break;


case '*':
printf("multi: %d",num1*num2);
break;


case '/':
printf("div: %d",num1/num2);
break;

default:
printf("invalid");
}
return 0;



}
