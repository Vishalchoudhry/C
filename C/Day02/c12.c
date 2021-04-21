//Copyright© 2021 Vishal Choudhary.
#include<stdio.h>
#include<string.h>
int main()
{
    char FirstName[30];
    char LastName[30];
    printf("Enter First Name:");
    scanf("%s",&FirstName);
    printf("\nEnter Last Name: ");
    scanf("%s",&LastName);
    //char FullName[60];
    //FullName=strcat(FirstName+LastName);
    printf("\nFull Name:\"%s\"",strcat(FirstName,LastName));
    return 0;

};
