#include <stdio.h>

int main() {
    double a;
    double b;
    
    scanf("%lf %lf", &a, &b);
    printf("%.13lf\n", a / b);
    
    return 0;
}