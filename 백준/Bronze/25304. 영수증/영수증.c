#include <stdio.h>

int main()
{
    int X, N, a, b;
    
    scanf("%d %d", &X, &N);
    
    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &a, &b);
        X = X - a * b;
    }
    
    if (X == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
