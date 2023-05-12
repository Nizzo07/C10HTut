#include<stdio.h>


typedef struct 
{
   int lenght;
   int width; 
} rectangle;

typedef struct position
{
    int x;
    int y;

} position;

//struct das outras structs
typedef struct buildingPlan
{
    char owner[30];
    rectangle rectangle;
    position position;
}buildingPlan;


int main()
{
    rectangle myRect = {5, 10};
    buildingPlan myHouse = {"Bruh", {5, 10}, {32, 48}};

    printf("the lenght is %d. Width is %d\n", myRect.lenght, myRect.width);


    printf("The house is at the coordenates(%dx %dy) with a size lenght of %d and with of %d, that it is owned by %s\n",
                myHouse.position.x,
                myHouse.position.y,
                myHouse.rectangle.lenght,
                myHouse.rectangle.width,
                myHouse.owner);

//array of structs -v
    int size = 3;
    position path[] = {{0, 1}, {1, 2}, {3, 4}};

    for(int i = 0; i < size; i++)
    {
        printf("%d %d\n", path[i].x, path[i].y);
    }

//pointer to a struct
buildingPlan *structPointer = &myHouse;
printf("Position of x = %d\n",structPointer -> position.x);
printf("Position of y = %d",structPointer -> position.y);


    
    
    
    return 0;
}