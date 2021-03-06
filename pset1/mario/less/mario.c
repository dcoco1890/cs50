/*
 * Mario Less Comfortable
 * CS50 Problem Set 1
 *
 * Recreates half pyramid from Mario
 * using Hashs ("#")
 */
#include <stdio.h>
#include <cs50.h>

void half_pyramid(int h);
void char_n_times(char c, int n);

int main(void)
{
    int height;

    // Prompts user for appropriate height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    // Prints Half pyramid
    half_pyramid(height);
}

void half_pyramid(int height)
{
    int i = height;
    while (i > 0)
    {
        // Calculates required blanks and hashs per line
        int blanks = i - 1;
        int hashs  = height - blanks + 1;

        // Prints line
        char_n_times(' ', blanks);
        char_n_times('#', hashs);

        printf("\n");
        i--;
    }
    return;
}

void char_n_times(char c, int n)
{
    // Prints c, n times
    while (n > 0)
    {
        printf("%c", c);
        n--;
    }
    return;
}
