#include <cs50.h> // extension (library) has to be loaded (for using get_string)
#include <stdio.h> // for standard input/output (for using printf)

int main(void)  {
    string name = get_string("What's your name?\n");
    printf("Hello, %s!\n", name);
    printf("This is CS50!\n");
}