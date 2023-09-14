#include <stdio.h>

int main()
{
    int a[5];
    int sum = 0;
    int tmp, min;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] > a[min])
            {
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
    printf("%d\n", sum / 5);
    printf("%d", a[2]);

    return 0;
}
