#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter how many odd numbers you want on screen: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}

