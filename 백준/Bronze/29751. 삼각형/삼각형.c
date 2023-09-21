#include <stdio.h>

int main()
{
    int w, h;
    scanf("%d %d", &w, &h);
    
    double total = 0;
    
    total = (double)0.5 * w * h;
    
    printf("%.1f", total);

    return 0;
}
