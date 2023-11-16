#include <stdio.h>

int main(void)
{
    char first[50];
    char last[50];

    printf("What's your first name? ");
    scanf("%s", first);

    printf("What's your last name? ");
    scanf("%s", last);
    printf("hello, %s %s\n", first, last);
}