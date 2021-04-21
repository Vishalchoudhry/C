//Copyriht©2021 Vishal Choudhary.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char FName[60];
    char LName[50];
    int ac;
    int age;
    int tr;
    double amount;
    printf("Enter First Name: ");;
    scanf("%s",&FName);
    printf("\nEnter Last Name:");
    scanf("%s",&LName);
    printf("\nEnter Acount Number:");
    scanf("%d",&ac);
    printf("\nEnter Your Age:");
    scanf("%d",&age);
    printf("\nEnter Amount $:");
    scanf("%lf",&amount);
    printf("\nEnter Number of Transactions: ");
    scanf("%d",&tr);
    printf("\t\t\t\t|Loading|\n\n\n\n");
    system("cls");
    printf("\n\t\t||Welcome %s %s in Bank of INDIA||\n\n\n",FName,LName);
    printf("Full Name: %s %s\nAccount Number: %d\nAge:%d\nAmount: $%6.2lf\nTransactions: %d\n",FName,LName,ac,age,amount,tr);
    double inter=(double)(amount/100)*6;
    double serviceC=(double)tr*0.50;
    printf("Interest: $%6.2lf\nService Charge: $%6.2lf",inter,serviceC);
    //char c;

    //getc(c);
    scanf("%d",tr);

    return 0;

};
