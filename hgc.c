#include <stdio.h>
#include <conio.h>

void game(char [], char []);

int main()
{
    char word[20] = {'d', 'u','c','k'};
    char guessed[20];
    game(word,guessed);   
    getch();
    return 0;   
} 
void game(char answer[], char guess[])
{
    int x = 0;
    char letter;

    while (x < 6) 
    {
        scanf(" %c",&letter);

        if (letter == answer[x])
        {
            guess[x]= letter;
            printf("keep going\n");
        }
        else 
        {
            printf("Try again\n");
        }      

        ++x;
    }  
}
