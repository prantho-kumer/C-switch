#include <stdio.h>

int main(void) {
  


// find number of days in a month

int month, days;
printf("/* Find number of days in a month */ \n");
printf("Please enter month: ");
scanf("%d", &month);

switch (month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
  days = 31;
break;
case 4:
case 6:
case 9:
case 11:
  days = 30;
break;
case 2:
  days = 28;
break;
default:
  days = 0;
  break;

}

if(days){
  printf("%d month have: %d days", month, days);
  }
  else{
  printf("you have entered an invalid month.");
  }








  return 0;
}