#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int multiplay(int a, int b);
int div(int a, int b);

int main()
{
    int a;
    printf("Введите первое число:");
    
    if (scanf("%d", &a) != 1)
    {
        printf("n/a");
        return 0;
    }

    int b;
    printf("Введите второе число:");
    if (scanf("%d", &b) != 1)
    {
        printf("n/a");
        return 0;
    }

    printf("%d %d %d ", sum(a, b), subtract(a, b), multiplay(a, b));
    
    if (b==0)
    {
        printf("n/a");
    }else
    {
        printf("%d", div(a, b));
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

