#include <stdio.h>

int main()
{
    int n = 5;

    for(int row = n; row >= 1; row--)
    {
        for(int col = 1; col <= row; col++)
            printf("%d", col);

        for(int space = 1; space <= 2*(n-row); space++)
            printf(" ");

        for(int num = row; num >= 1; num--)
            printf("%d", num);

        printf("\n");
    }

    for(int row = 2; row <= n; row++)
    {
        for(int col = 1; col <= row; col++)
            printf("%d", col);

        for(int space = 1; space <= 2*(n-row); space++)
            printf(" ");

        for(int num = row; num >= 1; num--)
            printf("%d", num);

        printf("\n");
    }

    return 0;
}