/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    float celsius,farenheit;
    printf("Enter temperature in celsius:");
    scanf("%f", &celsius);

    farenheit = (celsius* 9/5) + 32;
    printf("The farenheit temperature is: %2f\n", farenheit);
    return 0;
}