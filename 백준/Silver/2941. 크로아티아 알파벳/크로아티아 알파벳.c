#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int cnt = 0;
    int i;
    
    scanf("%s", a);
    
    for (i = 0; i < strlen(a); i++)
    {
        cnt++;
        
        if (a[i] == '=')
        {
            if (a[i - 1] == 'c' || a[i - 1] == 's')
            {
                cnt--;
            }
            if (a[i - 1] == 'z')
            {
                cnt--;
                if (a[i - 2] == 'd')
                {
                    cnt--;
                }
            }
        }
    
        if (a[i] == '-')
        {
            if (a[i - 1] == 'c' || a[i - 1] == 'd')
            {
                cnt--;
            }
        }
        
        if (a[i] == 'j')
        {
            if (a[i - 1] == 'l' || a[i - 1] == 'n')
            {
                cnt--;
            }
        }
    }
    
    printf("%d", cnt);

    return 0;
}
