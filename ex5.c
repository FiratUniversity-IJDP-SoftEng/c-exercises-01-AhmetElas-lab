#include<stdio.h>

void sayHello();
int main(void)
{
    sayHello();
    return 0;
}

void sayHello()
{
    char name[50];
    printf("HI! What's your name?\n");
    scanf("%s", name);
    printf("Hello! %s\n", name);
}
