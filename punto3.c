#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void text(int getrevertnumber[], int getnumber[], int cantidad);

int main() {
    int getnumber[10];

    printf("Por favor digite una sucesion de 10 numeros: ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &getnumber[i]);
    }

    int getrevertnumber[10] = {0}; 
    text(getrevertnumber, getnumber, 10);

    return 0;
}

void text(int getrevertnumber[], int getnumber[], int cantidad) {
    for (int i = cantidad - 1; i >= 0; i--) {
        getrevertnumber[cantidad - i - 1] = getnumber[i];
    }

    printf("Numeros invertidos: ");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", getrevertnumber[i]);
    }
    printf("\n");
}



 