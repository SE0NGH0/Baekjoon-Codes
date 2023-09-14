#include <stdio.h>

int num(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    int sum = 0;
    int min = 10000;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (num(i))
        {
            sum += i;
            if (min > i)
            {
                min = i;
            }
        }
    }
 
    if (sum == 0)
    {
        sum = -1;
    }
    printf("%d\n", sum);
    if (sum != -1)
    {
        printf("%d", min);
    }
}
