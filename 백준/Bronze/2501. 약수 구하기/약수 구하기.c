#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    int i;
    
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cnt++;
        }
        if (cnt == b)
        {
            break;
        }
    }
    
    if(i <= a)
    {
        printf("%d", i);
    }
    else
    {
        printf("0");
    }

    return 0;
}
