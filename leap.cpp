#include <stdio.h>
int main()
{
   int year;
   printf("Enter any year you wish");
   scanf(" %d ", &year);
   if (( year%400 == 0)|| (( year%4 == 0 ) &&( year%100 != 0)))
      printf("%d is a Leap Year. ", year);
   else
      printf("%d is not the Leap Year. ", year);
   return 0;
}

