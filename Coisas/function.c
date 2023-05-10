#include <stdio.h>

int itsVowel(char c)
{

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void F1()
{
    char c;

    printf("Enter a character to check if it is a vowel or a consoant: ");
    scanf("%c", &c);

    if (itsVowel(c))
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consoant", c);
    }
}

int checkisOdd(int n)
{

    if (n % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

void F2()
{

    int n;

    printf("Enter a number to check if it is odd or even: ");
    scanf("%d", &n);

    if (checkisOdd(n))
    {
        printf("%d is an odd number.", n);
    }
    else
    {
        printf("%d is an even number.", n);
    }
}

int main()
{
    F2();
    return 0;
}