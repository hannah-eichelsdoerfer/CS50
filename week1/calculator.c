#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promt user for x
    int x = get_int("x: ");
    // Promt user for y
    int y = get_int("y: ");
    // Print the sum of x and y (perform addition)
    printf("%i\n", x + y);
}