#include <stdio.h>

void guessNumber(int number)
{
    if (number == 555)
    {
        printf("Your number %d: %s\n", number, "Correct. You guessed it!");
    }
    else if (number > 555)
    {
        printf("Your number %d: %s\n", number, "You guessed too high!");
    }
    else if (number < 555)
    {
        printf("Your number %d: %s\n", number, "You guessed too low!");
    }
}

// TODO: command line からの引数（整数）を評価して guessNumber() に渡す方法を見つける
int main()
{
    guessNumber(500);
    guessNumber(560);
    guessNumber(555);
    return 0;
}
