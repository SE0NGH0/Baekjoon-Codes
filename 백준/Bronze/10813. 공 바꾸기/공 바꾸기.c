#include <stdio.h>

int arr[101] = {0, };

void swap(int x, int y)
    {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a, b;
    
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        swap(a, b);
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
    
}
