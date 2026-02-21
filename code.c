#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a,b;
    printf("Введите первое число: ");
    scanf("%d",&a);
    printf("Второе: ");
    scanf("%d",&b);
    printf("%d + %d = %d\n", a,b,a+b);
    printf("Равно ли 45? %s\n",(a+b==45) ? "true" : "false");

    return 0;
}