#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];
    int arr[26] = {0, };
    int max = 0;
    int check = 0;
    
    scanf("%s", s);
    int len = strlen(s);
    
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == s[j])
            {
                arr[i - 'a']++;
            }
        }
    }
    
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == s[j])
            {
                arr[i - 'A']++;
            }
        }
    }
    
    max = arr[0];
    
    for (int i = 1; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            check = i;
        }
    }
    
    int result = 0;
    
    for (int i = 0; i < 26; i++)
    {
        if (max == arr[i])
        {
            result++;
        }
    }
    
    if (result > 1)
    {
        printf("?");
    }
    else
    {
        printf("%c", check + 'A');
    }
    
    return 0;
}
