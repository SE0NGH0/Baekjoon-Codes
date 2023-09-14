#include <stdio.h>

int main()
{
    int a, score;
    int max = 0;
    int sum = 0;
    
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &score);
        sum += score;
        if (score > max)
        {
            max = score;
        }
        
    }
    
    double avg = 100.0 * sum / max / a;
    
    printf("%f\n", avg);
    
    return 0;
}
