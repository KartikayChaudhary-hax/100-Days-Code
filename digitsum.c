/*
Q38: Write a program to find the sum of digits of a number.
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int n;
    int sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("SUM:%d",sum);
}