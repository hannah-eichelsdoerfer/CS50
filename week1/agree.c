#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // Promt user to agree
  char c = get_char("Do you agree? (y/n) ");

  // Check wether user agreed
  if (c == 'Y' || c == 'y') // double quotes for strings and single quotes for single characters
  {
    printf("Agreed!\n");
  }
  else if (c == 'N' || c == 'n')
  {
    printf("Disagreed!\n");
  }
  else
  {
    printf("Please choose yes or no!\n");
  }
}