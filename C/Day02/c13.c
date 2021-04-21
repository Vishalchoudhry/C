//Copyright©2021 Vishal Choudhary.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter Your Age: ");
    scanf("%d",&x);
    printf("Your Age :\"%03d\"",x);
    int amount=234;
    printf("\nEnter Amount in $");
    scanf("%d",&amount);
    printf("\nPay This Amount:\"$%04d\"",amount);
    return 0;


};
