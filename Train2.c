#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
void ss(){
    int slices;

    printf("How many slices did you ate??\n");
    scanf("%d", &slices);

    switch (slices)
    {
        case 0:
            printf("Why didnt you eat none?\n");
            break;
        
        case 1: 
            printf("Great Job!\n");
            break;
        
        case 2: 
            printf("Ok\n");
            break;

        case 3:
            printf("You did...\nBAAAAD!\n");
            break;
        
        case 4: 
            printf("DISAPOINTMENT! >:(\n");
    default:
        break;
    }

}  

bool isPrime(int input)
{

    for(int i = sqrt(input); i > 1; i--)
    {
        if(input % i == 0)
        {
            return false;
        }
    }
    return true;

}
void checkPrime()
{
   
   int input;
   scanf("%d", &input);

   for(int i = input; i > 1; i--)
   {
    bool prime = isPrime(i);
      if(prime)
    {
        printf("%d is Prime\n", i);
    } else {
        printf("%d is not Prime\n", i);
    }

   }


}


int main()
{
    checkPrime();
    return 0;
}