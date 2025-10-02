/*
Q39: Write a program to find the product of odd digits of a number.
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/
#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int n;
    int pro=1;
    int temp;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        if(temp%2 == 1)
        {
            pro*=temp;
        }
        else
        {
            pro*=1;
        }
        n=n/10;
    }
    if(pro > 1)
    {
    printf("PRODUCT OF ODD DIGITS:%d",pro);
    }
    else
    {
        printf("No odd digits.");
    }
}