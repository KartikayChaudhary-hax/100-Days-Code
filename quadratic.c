/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the cofficients:");
    scanf("%lf %lf %lf",&a,&b,&c);
    double D=(b*b)-(4*a*c);
    if(D>0)
    {
    double root1= (-b+D)/(2*a);
    double root2=(-b-D)/(2*a);
    printf("Roots are real and differemt:%.0lf %.0lf",root1,root2);
    }
    else if(D==0)
    {
        double root1= (-b)/(2*a);
        printf("Roots are real and same:%.0lf",root1);
    }
    else if(D<0)
    {
        printf("Roots are complex");
    }
    return 0;

}