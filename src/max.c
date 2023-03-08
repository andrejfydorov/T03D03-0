#include <stdio.h>

int max(int a, int b);

int main()
{
    float a;
    printf("Введите первое число:");
    
    if (scanf("%f", &a) != 1)
    {
        printf("n/a");
        return 0;
    }

    float b;
    printf("Введите второе число:");
    if (scanf("%f", &b) != 1)
    {
        printf("n/a");
        return 0;
    }

    int c = a;
    int d = b;

    if (c != a || d != b)
    {
        printf("n/a");
        return 0;
    }


    printf("Максимум из введенных чисел это: %d", max(a, b));

    return 0;
}

int max(int a, int b){
    if (a > b){
        return a;
    }else
    {
        return b;
    }   
}