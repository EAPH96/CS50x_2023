#include <stdio.h>

int main(void){
    int x, y;

    printf("What's x? ");
    scanf("%i", &x);

    printf("What's y? ");
    scanf("%i", &y);

    if (x < y){
        /* code */
        printf("x is less than y\n");
    }else if (x > y){
        printf("y is less than x\n");
    }else{
        printf("x is equal than y\n");
    }

}