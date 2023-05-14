//Write a program to print first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
