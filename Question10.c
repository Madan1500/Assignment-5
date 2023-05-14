//Write a program to print the table of N
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter which table you want to see : ");
    scanf("%d",&i);
    for(j=1;j<=10;j++)
    {
        printf("%d x %d = %d",i,j,i*j);
        printf("\n");
    }
    return 0;
}
