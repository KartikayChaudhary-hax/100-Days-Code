/*
Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include <stdio.h>
#include <math.h>

int main()
{
  printf("Enter a number:");
  int num,num1,num2=0;
  scanf("%d",&num);
  num1=num;
  int countdigits=0;
  while(num>0)
  {
    countdigits=countdigits + 1;
    num=num/10;
  }
  num=num1;

  printf("%d\n",num);
  while(num>0)
  { 
    num2=num2 + pow((num%10),countdigits);
    num=num/10;
    printf("num=%d\n",num);
    printf("num2=%d\n",num2);
  }  
  if(num1 == num2)
  {
    printf("%d is a Armstrong number.",num1);
  }
  else
  {
    printf("%d is not a Armstrong number.",num2);
  }
  return 0;
}

