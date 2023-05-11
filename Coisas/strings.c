#include<stdio.h>
#include<string.h>


int main()
{
   printf("What is your favorite food: ");
   char favFood[68];
   scanf("%49s", favFood);
   printf("%s\n", favFood);


    int Charcount = 0;

    while (favFood[Charcount] != '\0')
    {
        Charcount++;
    }

    printf("The character count is %d\n", Charcount);



    return 0;
}