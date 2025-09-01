/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main()
{
    printf("Enter time in seconds:");
    int sec;
    int h,m,s;
    scanf("%d", &sec);

        h=sec/3600;
        sec=sec%3600;
        m=sec/60;
        sec=sec%60;
        s=sec%60;
    printf("%d:%d:%d",h,m,s);
        return 0;

}