#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int multiplay(int a, int b);
int div(int a, int b);

int main()
{
    int a;
    printf("Введите первое число:");
    scanf("%d", &a);
    int b;
    printf("Введите второе число:");
    scanf("%d", &b);

    printf("%d %d %d %d", sum(a, b), subtract(a, b), multiplay(a, b), div(a, b));

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
    return a / b;
}
