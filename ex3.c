#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    bool hasPet;
    char pet[20];
    printf("Do you have any pet? (1 for yes, 0 for no)\n");
    scanf("%d", &hasPet);
    if (hasPet)
    {
        printf("What kind of pet you have?\n");
        scanf("%s", pet);
        
        if (strcmp(pet, "cat") == 0)
        {
            printf("Meow!\n");
        } 
        else if (strcmp(pet, "dog") == 0) 
        {
            printf("Woof! Woof!\n");
        } 
        else
        {
            printf("Hmm, I only know the sounds for cats and dogs!\n");
        }
    }
    else
    {
        printf("You do not have a pet.\n");
    }
}
