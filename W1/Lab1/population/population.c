#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size
    int startSize, endSize, years = 0;
    do
    {
        printf("Start size: ");
        scanf("%i", &startSize);
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    do
    {
        printf("End size: ");
        scanf("%i", &endSize);

    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    while (startSize < endSize)
    {
        startSize += (startSize / 3) - (startSize / 4);
        years ++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}