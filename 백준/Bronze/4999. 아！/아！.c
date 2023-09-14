#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    char b[1000];
    int cnt = 0;
    int cnt1 = 0;
    
    scanf("%s %s", a, b);
    
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a')
        {
            cnt++;
        }
    }
    
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] == 'a');
        {
            cnt1++;
        }
    }
    
    if (cnt >= cnt1 || strlen(a) == strlen(b))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }
    
    
    
    return 0;
}
