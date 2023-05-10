#include<stdio.h>
#include<stdlib.h>
int main()
{
    int myGrades[] = {12, 23, 45};
    int mygrades2[] = {64, 78, 89};

    int const columns = 3;
    int const rows = 2;
    

    int grades[rows][columns] = {
        {12, 23, 45},
        {64, 78, 89}
    };  
    
    printf("%d ", grades[1][2]);

    return 0;
}