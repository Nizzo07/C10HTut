#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

/*The user has to guess a number from 0-5
output whether or not the person is correct*/
void GuessingGame()
{

    // Generate a random number with a +seudo random number
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;

    printf("%d\n", randomNumber);

    // modulos operator %
    // remaider of some division

    printf("Guess a number from 0 to %d: ", maxValue);
    int input;
    scanf("%d", &input);

    /*if(input == randomNumber){
        printf("YOU WIN!\n");
    } else{
        printf("YOU LOSE!\n");
    }*/

    while (input != randomNumber)
    {
        printf("YOU LOSE!\n");

        printf("Guess a number from 0 to %d: ", maxValue);
        scanf("%d", &input);
    }
    if (input == randomNumber)
    {
        printf("YOU WIN!!");
    }
}

// its odd or even

void OddEven()
{

    int num;

    printf("Input a number tocheck if it is odd or even: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even!", num);
    }
    else
    {
        printf("%d is odd!", num);
    }
}

// Check if a character is a vowel or a consoant

void VowelConsoant()
{

    char c;

    printf("Input a character to check if it is a consoant or a vowel: ");
    scanf("%c", &c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is a consoant", c);
    }
}

// sum Of Natural Numbers Using Recursion

int addNumbers(int n)
{

    if (n != 0)
    {

        return n + addNumbers(n - 1);
    }
    else
        return n;
}

void SNNUR()
{

    int num;
    printf("Enter a positive Integer: ");
    scanf("%d", &num);

    printf("Sum = %d", addNumbers(num));
}

void switchs()
{
    printf("How many slices did you eat?\n");

    int slices;
    scanf("%d\n", &slices);

     switch(slices)
     {
        case 1:
            printf("Great");
            break;

        case 2:
            printf("Ok");
            break;

        case 3:
            printf("Bad job");
            break;

        case 4:
            printf("DISAPOINTMENT");
            break;

        default:
            printf("Terrible");
            break;
     }
  

}


int main()
{

    switchs();
    return 0;
}

