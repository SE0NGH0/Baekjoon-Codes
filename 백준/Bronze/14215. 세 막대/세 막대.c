#include <stdio.h>
#define length 3

void sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

int main()
{
    int a[length];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    
    sort(a, length);
    
    int sum = a[1] + a[2];
    
    while (1)
    {
        if (a[0] < sum)
        {
            sum += a[0];
            break;
        }
        else a[0] -= 1;
    }
    
    printf("%d", sum);
    
    return 0;
}
