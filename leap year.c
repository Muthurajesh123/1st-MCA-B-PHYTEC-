//***LEAP YEAR***
#include<stdio.h>
void main()
{
int year;
printf("Enter the year:");
scanf("%d",&year);

if(year%100==0)
 {
   if(year%400==0)
   {
   printf("Leap year");
   }
   else
   {
   printf("Not a lear year");
   }
 }

else
 {
   if(year%4==0)
   {
   printf("Leap year");
   }
   else
   {
   printf("Not a leap year");
   }

 }
}
