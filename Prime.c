/*
Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count=count +1;
        }
    }
    if(count == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;

}