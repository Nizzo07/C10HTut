#include<stdio.h>

void Ternary1()
{
    double money = 30;
    double cost = 25;

    money > cost ? printf("You can afford it") :  printf("You cant afford it with %lf", money);
 
}

void Ternary2()
{
    int num1;
    int num2;

    printf("Enter one number: ");
    scanf("%d", &num1);

    printf("Enter one number again: ");
    scanf("%d", &num2);

    num1 > num2 ? printf("%d\n", num1 - num2) : printf("%d\n", num1 + num2); 
}

int main()
{
    Ternary2();
    return 0; 
}

