#include<stdio.h>
#include<stdlib.h>
int main()
{
    int myGrades[] = {12, 23, 45};

   int const columns = 3;
   int const rows = 2;
   int grades[rows][columns];                   //| 12 23 45 |
                                               // | 68 76 98 |

   grades[0][0] = 12;
   grades[0][1] = 23;
   grades[0][2] = 45;
   grades[1][0] = 68;
   grades[1][1] = 76;
   grades[1][2] = 98;

   for(int i = 0; i < rows; i++)
   {
      for(int j = 0; j < columns; j++)
      {
        printf("%d ", grades[i][j]);
      }
      printf("\n");
   }
   
    return 0;
}