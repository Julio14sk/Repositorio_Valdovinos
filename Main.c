#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int main() {
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    if(E()) {
        printf("la cadena es valida.\n");
    } else {
        printf("la cadena no es valida.\n");
    }

    return 0;
}
