#include<stdio.h>
#include<string.h>


int main()
{
   printf("What is your favorite food: ");
   char favFood[50];
   
   scanf("%49s", favFood);
   printf("%s\n", favFood);


    int Charcount = strlen(favFood);


    printf("The character count is %d\n", Charcount);



    return 0;
}