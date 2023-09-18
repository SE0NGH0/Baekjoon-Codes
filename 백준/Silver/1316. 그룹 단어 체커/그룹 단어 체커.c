#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char a[100];
    int group;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        group = 1;
        
        for (int j = 0; j < strlen(a); j++)
        {
            for (int k = 0; k < j - 1; k++)
            {
                if (a[j] == a[k] && a[j] != a[j - 1])
                {
                    group = 0;
                    break;
                }
            }
            
            if (group == 0)
            {
                break;
            }
        }
        
        if (group == 1)
        {
            cnt++;
        }
    }
    
    printf("%d", cnt);

    return 0;
}
