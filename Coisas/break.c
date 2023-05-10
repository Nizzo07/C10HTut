#include<stdio.h>
#include<stdbool.h>
int main()
{
    /*for(int i = 0; i < 500; i++)
    {
        printf("Helloooo!\n");
        if(i == 6)
        break;
    }*/
    int number = 23232;
    int i = 0;
    while(true)
    {
        printf("%d ", i);
        if(i == number)
        {
            printf("We found it!\n");
            break;
        }
        i++;
    }

    return 0;
}