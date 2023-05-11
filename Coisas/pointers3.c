#include<stdio.h>

int main()
{
    int x = 3;
    int *p = &x;
    int result = 12;

    for(int i = 0; i < 3; i++)
    {
      result += x + (*p);
      printf("%d\n", result); 
    }
     
    return 0;
}