#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 5; j++)
        {
            // A
            if(j == 0 || j == 4 || (i == 0 && j > 0 && j < 4) || i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        for(j = 0; j < 5; j++)
        {
            // B
            if(j == 0 || (i == 0 && j < 4) ||
               (i == 3 && j < 4) || (i == 6 && j < 4) ||
               (j == 4 && (i == 1 || i == 2 || i == 4 || i == 5)))
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        for(j = 0; j < 5; j++)
        {
            // I
            if(i == 0 || i == 6 || j == 2)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
