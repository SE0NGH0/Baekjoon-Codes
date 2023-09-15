#include <stdio.h>

int main()
{
    int n, k, temp;
    scanf("%d %d", &n, &k);
    
    int num[1000] = {0, };
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        if (i == k - 1)
            break;
    }
    
    printf("%d", num[k - 1]);
    
    return 0;
}
