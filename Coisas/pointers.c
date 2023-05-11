#include<stdio.h>


int main()
{
    int x;

    int *P = &x;

    printf("Enter a number: ");
    scanf("%d", *P);

    return 0;
}