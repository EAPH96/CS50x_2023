#include <stdio.h>

int main(void){

    char agree;

    printf("Do you agree? (y = yes / n = no) ");
    scanf("%c", &agree);

    if (agree == 'y' || agree == 'Y'){
        printf("Agreed.\n");
    }else if (agree == 'n' || agree == 'N'){
        printf("Not agreed.\n");
    }else{
        printf("Wrong answer.\n");
    }

    return 0;
}