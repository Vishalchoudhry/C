//Copyright©2021 Vishal Choudhary.
#include<stdio.h>
int main()
{
    int input[3];
    printf("Enter Three Numbers to Get Avg. of Numbers: ");
    scanf("%d %d %d",&input[0],&input[1],&input[2]);
    double avg=(double)(input[0]+input[1]+input[2])/3;
    printf("The Avg. is:\" %6.1lf \"",avg);
    return 0;

};
