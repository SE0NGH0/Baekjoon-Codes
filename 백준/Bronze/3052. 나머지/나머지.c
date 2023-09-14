#include <stdio.h>

int main()
{
    int a;
    int arr[10];
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        arr[i] = a % 42;
    }
    
    int num = 0;
    
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            num++;
        }
    }
    printf("%d", num);

    return 0;
}
