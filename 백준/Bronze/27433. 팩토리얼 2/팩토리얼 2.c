#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int total = 1;
    
    for (int i = 1; i <= n; i++)
    {
        total *= i;
    }
    
    printf("%lld", total);
    
    return 0;
}
