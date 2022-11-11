#include <stdio.h>
int main()
{
    for (int i = 0; i < 17; i++)
    {
        printf("%c", 220);
    }
    printf("MULTIPLICATION TABLES");
    for (int i = 0; i < 17; i++)
    {
        printf("%c", 220);
    }
    printf("\n%c                                                     %c\n", 219, 219);
    int i = 1;
    do
    {
        printf("%c  %c", 219, 201);
        for (int i = 0; i < 47; i++)
        {
            if ((i == 15) || (i == 31))
            {
                printf("%c", 203);
            }
            else
                printf("%c", 205);
        }
        printf("%c  %c\n", 187, 219);
        for (int j = 1; j <= 10; j++)
        {
            printf("%c  %c  %d x %-2d = %-3d %c  %d x %-2d = %-3d %c  %d x %-2d = %-3d %c  %c\n", 219, 186, i, j, i * j, 186, i + 1, j, (i + 1) * j, 186, (i + 2), j, (i + 2) * j, 186, 219);
        }
        printf("%c  %c", 219, 200);
        for (int i = 0; i < 47; i++)
        {
            if ((i == 15) || (i == 31))
            {
                printf("%c", 202);
            }
            else
                printf("%c", 205);
        }
        printf("%c  %c\n", 188, 219);
        i = i + 3;
    } while (i <= 9);
    printf("%c                                                     %c\n", 219, 219);

    for (int i = 0; i < 55; i++)
    {
        printf("%c", 223);
    }
}