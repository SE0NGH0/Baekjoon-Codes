#include <stdio.h>

int main()
{
    int a;
    int num = 0;
    int cnt = 0;
    
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &num);
        
        for (int j = 2; j <= num; j++)
        {
            if (num == j)
            {
                cnt++;
            }
            if (num % j == 0)
                break;
        }
    }
    
    printf("%d", cnt);
   
    return 0;
}
