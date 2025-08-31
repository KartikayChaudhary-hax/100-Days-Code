/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and 
time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>
int main()
{
    float p,r,t;
    printf("Enter Principal amount:");
    scanf("%f", &p);
    printf("Enter rate:");
    scanf("%f", &r);
    printf("Enter time in years:");
    scanf("%f", &t);
    float si=(p*r*t)/100;
    float ci=0;
    for(int i=t;i>0;i--)
    {
      ci=ci +((p*r*1)/100);
      p=p+((p*r*1)/100);
    }
    printf("Simple Interedt:%f\n", si);
    printf("Compound Interest:%f\n", ci);
    return 0;
}