#include <stdio.h>

int main()
{
    int a[100][100] = {0, };;
    
    int n, x, y;
    int cnt = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        for (int j = y; j < y + 10; j++)
        {
            for (int k = x; k < x + 10; k++)
            {
                a[j][k] = 1;
            }
        }
    }
    
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (a[i][j] == 1)
            {
                cnt++;
            }
        }
    }
    
    printf("%d", cnt);

    return 0;
}
