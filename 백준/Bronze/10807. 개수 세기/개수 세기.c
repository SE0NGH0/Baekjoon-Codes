#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int v;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);
    
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            num++;
        }
    }
    printf("%d", num);
    
    return 0;
}
