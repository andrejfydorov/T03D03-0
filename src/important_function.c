#include <stdio.h>
#include <math.h>

float evaluate(float x);

int main()
{
    float x;
    printf("Введите число:");
    
    if (scanf("%f", &x) != 1)
    {
        printf("n/a");
        return 0;
    }


    printf("%.1f", evaluate(x));

    return 0;
}

float evaluate(float x){
    return 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1/3) - 1e3) * x + 3) / (x * x / 2) - x * pow((10 + x), (2/x)) - 1.01;
}