#include <stdio.h>
#include <stdlib.h>
// MALLOC USANDO MACRO
#define MALLOC(ptr, size){ \
    if(ptr == NULL){ \
        fprintf(stderr, "Memoria insuficiente"); \
        exit(1); \
    } \
}

int main(int argc, char *argv[]){
    int *p;

    MALLOC(p, sizeof(int));
    *p = 9; // atribui 9 ao inteiro apontado por p
    printf("%d\n", *p); // imprime o valor apontado por p
    free(p); // libera a memória alocada
    return 0;
}