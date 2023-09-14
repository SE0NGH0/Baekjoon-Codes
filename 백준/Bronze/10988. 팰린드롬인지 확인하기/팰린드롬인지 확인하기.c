#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != str[strlen(str) - i - 1])
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    
    return 0;
}
