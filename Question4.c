//Write a program to print first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter how many odd numbers you want on screen: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
    return 0;
}
