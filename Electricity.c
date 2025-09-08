/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
    printf("Enter number of units consumed:");
    int a;
    scanf("%d", &a);
    if(a<=100)
    {
        int bill=a*5;
        printf("Bill: ₹%d",bill);
    }
    else if(a<=200)
    {
        int bill=((a-100)*7)+500;
        printf("Bill: ₹%d",bill);
    }
    else if(a<=300)
    {
        int bill=((a-200)*10)+1200;
        printf("Bill: ₹%d",bill);
    }
    else if(a>300)
    {   int bill=((a-300)*12)+2400;
        printf("Bill: ₹%d",bill);
    }
    return 0;
}
