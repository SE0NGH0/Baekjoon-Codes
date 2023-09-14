#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    int x, y;
    
    x = (a / 100) + (a / 10 % 10 * 10) + (a % 10 * 100);
    y = (b / 100) + (b / 10 % 10 * 10) + (b % 10 * 100);
    
    if (x > y)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", y);
    }
    return 0;
}
