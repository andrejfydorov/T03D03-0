#include <stdio.h>

int max(int a, int b);

int main()
{
    int a;
    printf("Введите первое число:");
    scanf("%d", &a);
    int b;
    printf("Введите второе число:");
    scanf("%d", &b);

    printf("Максимум из введенных чисел это: %d\n", max(a, b));

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