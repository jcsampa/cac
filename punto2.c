#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void text(char getreverttext[], char gettext[],int cantidad);
 

int main(){


 char gettext[11];

    printf("por favor digite una palabra caracteres: ");
    int i;
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &gettext[i]);
    }
    gettext[10] = '\0';

    text(gettext, gettext,10);

    return 0;
    
}
void text(char getreverttext[], char gettext[],int cantidad){
    
    for(int i = cantidad - 1 ;i >= 0; i--){
    printf("%c", gettext[i]);
    }
    printf("\n");
}
 

