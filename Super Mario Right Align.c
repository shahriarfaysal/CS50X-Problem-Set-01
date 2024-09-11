#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for the height (between 1 and 8 inclusive)
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Loop through rows
    for (int i = 1; i <= height; i++)
    {
        // Print spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
