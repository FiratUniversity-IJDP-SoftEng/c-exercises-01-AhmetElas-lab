
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_LENGTH 3000



int main(void)
{
    char text[MAX_LENGTH];

    printf("Welcome to Grade calculation machine. \n");
    printf("Plesae, Enter your essay: \n");
    
    if (fgets(text, MAX_LENGTH, stdin) == NULL) 
    {
        printf("Please enter an essay next time: \n");
        return 1; 
    }


    double letter = 0;
    double word = 1;
    double sentence = 0;
    double n = strlen(text);
    
    for (int i = 0; i < n; i++) 
    {
        char character = text[i];

        if (isalpha(character)) //to count letter
        {
            letter++;
        }
        else if (isspace(character)) //to count word
        {
            word++;
        }
        else if (character == '?' || character == '!' || character == '.') //to count sentence
        {
            sentence++;
        }
    } 

    double L = (double) letter / word * 100;  // calculation part
    double S = (double) sentence / word * 100;
    double index =0.0588 * L - 0.296 * S - 15.8;

    int result = round(index);
    
    if (result >= 16) // the last part
    {
        printf("Grade 16+ \n");
    }
    else if (result < 1)
    {
        printf("before grade 1 \n");
    }
    else 
    {
        printf("Grade %i\n", result);
    }
    return 0;
}
