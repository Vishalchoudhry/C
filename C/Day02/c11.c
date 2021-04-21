//Copyright© 2021 Vishal Choudhary
#include<stdio.h>
#include<string.h>
int main()
{
    
    char Name[120]="Vishal Choudhary";
    printf("Your Current Name:\"%s\"",Name);
    //printf("\nEnter Your New Name ?");
    //scanf("%s",&Name);
    strcpy(Name,"Vexo is Your Next Name");
    printf("\nYour New Name:\"%s\"",Name);


    return 0;

};
