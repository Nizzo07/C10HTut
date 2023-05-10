#include<stdio.h>

void forl()
{
    int max;
    scanf("%d", &max);

    for(; max > 0; max -= 2)
    {
        printf("%d\n", max);
    }

}

void nestedforl()
{
/*0
  1 0
  2 1 0
  3 2 1 0
  4 3 2 1 0
  5 4 3 2 1 0
  6 5 4 3 2 1 0
  7 6 5 4 3 2 1 0
  8 7 6 5 4 3 2 1 0
  9 8 7 6 5 4 3 2 1 0
  10 9 8 7 6 5 4 3 2 1 0
  VAMOS RECREAR ISTO*/

    for(int i = 0; i < 11; i++)
    {
        //printf("%d\n", i);

        for(int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}

void whilel()
{
    int i = 0;
    while(i < 10)
    {
        printf("%d ", i);
        i++;
    }
}

void nestedwhilel()
{
    int i = 0, k;

    while(i < 11)
    {
        k = i - 1;
        printf("%d ", i);
        i++;

        while(k >= 0)
        {
            printf("%d ", k);
            k--;
        }

        printf("\n");
    }
}

void dowhilel()
{
  int input;
    do
    {
        printf("Please enter a number: ");
        scanf("%d", &input);

    }while (input < 0 || input > 9);
    
     
}




int main(){

    dowhilel();

    return 0;
}