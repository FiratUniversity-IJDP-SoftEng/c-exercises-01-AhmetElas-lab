#include <stdio.h>

int main (void)
{
    int number;
    printf("HI! let's guess a number between 1 and 5.\n");
    scanf("%d", &number);
  
    if(number < 1 || number > 5)
    {
        //hata kodunu harf için ayrı yapmadım zaten 1 ila 5 arasında yazılabilicek karakter yok.
        printf("PLEASE WRITE NUMBER BETWEEN 1 AND 5\n");
        return 1;
    }
    else if (number == 3)
    {
        printf("Congratulations! You guessed the number correctly.\n");
        return 0;
    }
    else
    {
        printf("Sorry, that's not the number I was thinking of.\n");
        return 1;
    }
}

