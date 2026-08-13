#include <stdio.h>

int main() {
    printf("DO YOU WANT TO SAVE FILES..... PRESS Y/N: ");

    char input;
    scanf("%c", &input);

    if (input == 'Y' || input == 'y')
    {
        if (input == 'Y')
        {
            printf("You pressed capital Y.\n");
        }
        else
        {
            printf("You pressed small y.\n");
        }

        printf("FILE SAVING");
    }
    else
    {
        if (input == 'N' || input == 'n')
        {
            printf("FILE NOT SAVED");
        }
        else
        {
            printf("If you are oversmart !!!!!!!!");
        }
    }

    return 0;
}