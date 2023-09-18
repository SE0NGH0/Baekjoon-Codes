#include <stdio.h>
#include <string.h>

int main()
{
    char name[51];
    char grade[3];
    double credit;
    
    double sumcredit = 0;
    double tmp;
    double res = 0;
    
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", name, &credit, grade);
        
        if (grade[0] == 'P') continue;
        
        sumcredit += credit;
        
        if (grade[0] == 'F') continue;
        
        if (grade[0] == 'A')
        {
            tmp = 4;
        }
        else if (grade[0] == 'B')
        {
            tmp = 3;
        }
        else if (grade[0] == 'C')
        {
            tmp = 2;
        }
        else
        {
            tmp = 1;
        }
        
        if (grade[1] == '+')
        {
            tmp += 0.5;
        }
        
        res += credit * tmp;
    }
    
    printf("%lf", res / sumcredit);

    return 0;
}
