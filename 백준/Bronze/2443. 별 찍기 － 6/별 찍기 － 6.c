#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    for (int i = a; i > 0; i--)
    {
        for (int j = a - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 2 * i - 1; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}