//Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter how many times you want to see MySirG on screen: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("MySirG");
        printf("\n");
    }
    return 0;
}
