#include <stdio.h>

int main()
{
    int a;

    int arr[100000] = {0, };
    int i, j;
    
    while (1)
    {
        int cnt = 0;
        int sum = 0;
        scanf("%d", &a);
        
        if (a == -1)
            return 0;
        
        for (i = 1, j = 0; i < a; ++i)
        {
            if (a % i == 0)
            {
                arr[j++] = i;
                ++cnt;
                sum += i;
            }
        }
        
        if (sum == a)
        {
            printf("%d = %d", a, arr[0]);
            
            for (i = 1; i < cnt; ++i)
            {
               printf(" + %d", arr[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect.\n", a);
        }
        
    }
    
    
    return 0;
}
