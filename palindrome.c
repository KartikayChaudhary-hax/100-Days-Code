/*
Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/
#include <stdio.h>
int main()
{
    printf("Enter a number to check if it's palindrome:");
    int num;
    scanf("%d",&num);
    int revnum=0;
    for( int i=num ; i>0;)
    {
        if(i >= 10)
        {
            revnum=(revnum+(i % 10))*10;
        }
        else
        {
            revnum=revnum + (i % 10);
        }
        i=i/10;
    }
    
    if(revnum == num)
    {
        printf("%d is a palindrome",num);
    }
    else
    {
        printf("%d is not a palindrome",num);
    }
    return 0;

}