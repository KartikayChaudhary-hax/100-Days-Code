 /*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main()
{
    printf("Enter the sides of triangle:");
    int a,b,c;    
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<c || a+c<b || b+c<a)
    {
        printf("not a triangle");
    }
    else
    {
        if(a==b && a==c)
        {
            printf("Equilateral Triangle\n");
        }
        else if(a==b && a!=c && b!=c)
        {
            printf("Isosceles Triangle\n");
        }
        else if(a!=b && a!=c && b!=c)
        {
            printf("Scalene Triangle\n");
        }
    }
}