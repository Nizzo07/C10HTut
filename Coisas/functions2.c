#include<stdio.h>
#include<stdlib.h>


int factorial(int number)
{
    int factorial;

    for (int i = number; i > 1; i--)
    {
        factorial *= i;
    }

    return factorial;
}

void outputfactorial(int input)
{
    printf("The factorial of %d is %d.\n", input, factorial(input));

}

int main()
{
   for (int i = 0; i < 10; i++)
   {
    outputfactorial(i);
   }

   return 0;
}