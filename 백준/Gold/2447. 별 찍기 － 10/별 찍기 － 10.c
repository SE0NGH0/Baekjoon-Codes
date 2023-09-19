#include <stdio.h>

int star(int row, int col, int n)
{
    if ((row / n) % 3 == 1 && (col / n) % 3 == 1)
    {
        printf(" ");
    }
    else
    {
        if (n / 3 == 0)
        {
            printf("*");
        }
        else
        {
            star(row, col, n / 3);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            star(i, j, n);
        }
        printf("\n");
    }

    return 0;
}

