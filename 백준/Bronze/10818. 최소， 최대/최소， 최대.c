#include <stdio.h>

int main()
{
    int n, a;
    scanf("%d", &n);
    
    int min = 1000000, max = -1000000;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
    
        if (a < min)
        {
            min = a;
        }
        if (a > max)
        {
            max = a;
        }
    }
    
    printf("%d %d\n", min, max);
    
    return 0;
    
}
