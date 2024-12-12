// C program to use function with
// no argument and no return values
#include <stdio.h>

void sum()
{
	int x, y;
	printf("Enter x and y\n");
	scanf("%d %d", &x, &y);
	printf("Sum of %d and %d is: %d\n", x, y, x + y);
}

void sub()
{
    int a,b;
    printf("Enter a and b\n");
	scanf("%d %d", &a, &b);
    printf("Sub of %d and %d is : %d\n", a,b, a - b);
}
void mul()
{
   int a,b;
   printf("Enter a and b\n");
   scanf("%d %d", &a,&b);
   printf("multi of %d and %d is:%d\n",a,b,a*b);

}
void div()
{
   int a,b;
   printf("Enter a and b\n");
   scanf("%d %d", &a,&b);
   printf("div of %d and %d is:%d\n",a,b,a/b);

}

// Driver code
int main()
{
	// function call
	sum();
	sub();
    mul();
    div();
	return 0;
}
