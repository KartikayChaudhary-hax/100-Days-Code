/*
Q28: Write a program to print the product of even numbers from 1 to n.
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/
#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int d;
    scanf("%d",&d);
    int pro=1;
    for(int i=2;i<=d;i=i+2)
    { 
          pro=pro*i;
    }
    printf("The product of even numbers from 1 to %d is:%d",d,pro);
    return 0;
}