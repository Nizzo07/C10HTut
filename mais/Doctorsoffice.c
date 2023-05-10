#include <stdio.h>

// doctors office app
// 1) add a patient;
// 2) View Pacient;
// 3) Search patients;
// 4) Exit;

int main()
{

    printf("Choose a menu option 1-4:\n");
    printf("1. Add a Patient:\n");
    printf("2. View a patient:\n");
    printf("3. Search patients:\n");
    printf("4. exit\n");

    int input;
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Adding a patient..\n");
    }
    else if (input == 2)
    {
        printf("Viewing a patient..\n");
    }
    else if (input == 3)
    {
        printf("Searching for patients..");
    }
    else if (input == 4)
    {
        printf("Exiting...\n");
        printf("Want to save?\n");
        char q;
        
        getchar();
        scanf("%c", &q);


        if(q == 'Y' || q == 'y')
        {
            printf("Saving changes...\nExiting...\n");
        } else if(q == 'N' || q == 'n')
        {
            printf("Exiting...");
        } else {

            printf("I dont know what to do...");
        }
    }
    else
    {
        printf("Your input is not correct");
    }

    return 0;
}