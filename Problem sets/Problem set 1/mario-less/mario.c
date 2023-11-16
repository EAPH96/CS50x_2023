#include <stdio.h>

int main(void) 
{
    int height, spaces;

    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 1 || height > 8);
    
    spaces = height - 1;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= spaces; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= height - spaces; i++)
        {
            printf("#");
        }
        printf("\n");
        spaces--;
    }
    
}