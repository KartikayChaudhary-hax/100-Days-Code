/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>
int main()
{
 printf("Enter Cost price:");
 double cp;
 scanf("%lf", &cp);
 printf("Enter selling price:");
 double sp;
 scanf("%lf", &sp);
 if(cp>sp)
 {
    double loss=((cp-sp)/cp)*100;
    printf("Loss %.0lf%%",loss);
 }
 else if(sp>cp)
 {
    double profit=((sp-cp)/cp)*100;
    printf("Profit %.0lf%%",profit);
 }
 else
 {
    printf("Break Even Point");
 }
 return 0;
}