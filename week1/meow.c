#include <stdio.c>

// int main(void)
// {
//     // printf("meow\n");
//     // printf("meow\n");
//     // printf("meow\n");

//     int counter = 1;
//     while (counter < 3)
//     {   
//         printf("meow\n");
//         counter++;
//     }
// }

void meow(void) // return type needs to be specified
{
    printf("meow\n");
}

int main(void)
{
    // While Loop
    int i = 0;
    while (i <= 3)
    {   
        printf("meow\n");
        i++;
    }

    // For Loop (does exactely the same as the while loop with counter)
    for (int i = 0; i < 3; i++)
    {
      // printf("meow\n");
      meow();
    }
    
}

