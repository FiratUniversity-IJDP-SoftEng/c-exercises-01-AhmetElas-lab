#include <stdio.h>

int main(void)
{
    char name[50];
    char age_input[10];
    int age;
    printf("HI! What is your name?\n");
    scanf("%49s", &name);

    printf("Hello, %s! How old are you?\n", name);
    scanf("%d", &age);
    /*if(scanf("%d", &age) != 1)
    {
        printf("Invalid input for age. Please enter a number.\n");
        return 1;
    }*/
    if(age < 0)
    {
        printf("Age cannot be negative.\n");
        return 1;
    }
    else if(age > 200)
    {
        printf("MR. %s It's impossible for you to live that long.\n", name);
        return 1;
    }
    for(int i = age; i > 0; i--)
    {
        printf("Happy Birthday %s\n", name);

    }
    return 0;
}
