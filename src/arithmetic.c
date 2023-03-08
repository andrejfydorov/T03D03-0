#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int multiplay(int a, int b);
int div(int a, int b);

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

    printf("%d %d %d ", sum(c, d), subtract(c, d), multiplay(c, d));
    
    if (b==0)
    {
        printf("n/a");
    }else
    {
        printf("%d", div(c, d));
    }

    return 0;
}

int sum(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiplay(int a, int b){
    return a * b;
}

int div(int a, int b){
    return (a / b);
}

