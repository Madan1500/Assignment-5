#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter till which natural numbers you want cubes: ");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        printf("%d",j*j*j);
        printf("\n");
    }
    return 0;
}
