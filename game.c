#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
int game(char you, char bot)
{
    if (you == bot)
    {
        return -1;
    }
    if (you == 's' && bot == 'p')
    {
        return 0;
    }
    else if (you == 'p' && bot == 's')
    {
        return 1;
    }
    if (you == 's' && bot == 'z')
    {
        return 1;
    }
    else if (you == 'z' && bot == 's')
    {
        return 0;
    }
    if (you == 'p' && bot == 'z')
    {
        return 0;
    }
    else if (you == 'z' && bot == 'p')
    {
        return 1;
    }
    if (you != 'p' && you != 's' && you != 'z')
    {
        return 2;
    }
}
int main()
{
    int n;
    char you, bot, result;
    srand(time(NULL));
    n = rand() % 100;
    if (n < 33)
    {
        bot = 's';
    }
    if (n > 33 && n < 66)
    {
        bot = 'p';
    }
    if (n > 66)
    {
        bot = 'z';
    }
    printf("\n\n\n----------STONE,PAPER,SCISSOR GAME USING C----------\n\n\n\n");
    
        printf("Instructions : \n");
        printf("1.Enter 'p' for Paper .\n");
        printf("1.Enter 's' for Stone .\n");
        printf("1.Enter 'z' for Scissor .\n");
        printf("\n\n Enter your Choice : ");
        scanf("%c", &you);
        printf("\nYou : '%c' & Computer : '%c'\n", you, bot);
        result = game(you, bot);
        if (result == 0)
        {
            printf("\n OOPS ,You Lost !!!");
            printf("\n The Computer Won !!!");
        }
        if (result == 1)
        {
            printf("\n WOW ,You  Won !!!");
            printf("\n The Computer lost !!!");
        }

        if (result == -1)
        {
            printf("\n GAME DRAW !!!");
        }

        if (result == 2)
        {
            printf("\n INVALID CHOICE !!! ");
            printf("\n PLEASE ENTER A VALID CHOICE !!!");
        }

    return 0;
}