#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    char s[101];
    
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++)
    {
        scanf("%s", s);
        printf("%c%c \n", s[0], s[strlen(s) - 1]);
    }
    return 0;
}
