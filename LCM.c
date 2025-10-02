
/*
Q37: Write a program to find the LCM of two numbers.
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() 
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    lcm = (x * y) / a;

    printf("LCM: %d\n", lcm);

    return 0;
}