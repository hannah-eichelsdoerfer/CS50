#include <stdio.c>

void meow(int n); // return type needs to be specified

int main(void)
{
    meow(3);
}

// if we want to have the functions at the bottom we would still have to declare them before the main function but could put the whole thing here

void meow(int n)
{
   // For Loop (does exactely the same as the while loop with preceeding counter)
  for (int i = 0; i < n; i++)
    {
      printf("meow\n");
    }  
}
