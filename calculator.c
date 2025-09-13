/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    printf("Press 'a' for addition\nPress 'b' for subtraction\nPress 'c' for multiplication\nPress 'd' for division\nPress 'e' for modulus\n");
    char ch;
    scanf("%c",&ch);
    int a,b;

    switch (ch)
    {
        case 'a':
        {
            printf("Enter two numbers to add:");
            scanf("%d %d",&a,&b);
            int sum=a+b;
            printf("SUM=%d",sum);
            break;

        }
        case 'b':
        {
            printf("Enter two numbers to subtract:");
            scanf("%d %d",&a,&b);
            int diff=a-b;
            printf("DIFFERENCE=%d",diff);
            break;
        }
        case 'c':
        {
            printf("Enter two numbers to multiply:");
            scanf("%d %d",&a,&b);
            int pro=a*b;
            printf("PRODUCT=%d",pro);
            break;
        }
        case 'd':
        {
            printf("Enter two numbers to divide:");
            scanf("%d %d",&a,&b);
            int quo=a/b;
            printf("QUOTIENT=%d",quo);
            break;
        }
        case 'e':
        {
            printf("Enter two numbers to find modulus:
                ");
            scanf("%d %d",&a,&b);
            int mod=a%b;
            printf("MODULUS=%d",mod);
            break;
        }
        default:
        {
            printf("Your maths is weak");
        }
    }
    return 0;
    
}