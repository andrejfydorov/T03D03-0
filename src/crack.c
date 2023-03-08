#include <stdio.h>

int main()
{
    float x;
    printf("Введите первое число:");
    
    if (scanf("%f", &x) != 1)
    {
        printf("n/a\n");
        return 0;
    }

    float y;
    printf("Введите второе число:");
    if (scanf("%f", &y) != 1)
    {
        printf("n/a\n");
        return 0;
    }

    float idle = 25;

    if (((x * x) + (y * y)) <= idle)
        printf("GOTCHA");
    else
        printf("MISS");


    return 0;
}

