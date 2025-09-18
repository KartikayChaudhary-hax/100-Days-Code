/*
Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    printf("Enter a number to be reversed:");
    int n;
    int revnum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        revnum=(revnum*10)+(i%10);
    }
    printf("%d",revnum);
    return 0;
}