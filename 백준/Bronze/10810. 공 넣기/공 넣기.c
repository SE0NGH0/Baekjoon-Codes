#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a, b, c;
    int arr[101] = { 0, };
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        for (int k = a; k <= b; k++)
        {
            arr[k] = c;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
}
