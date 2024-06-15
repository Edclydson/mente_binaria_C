#include <stdio.h>
#include <stdlib.h>
// MALLOC USANDO FUNÇÃO
void *malloc_s(size_t size){
    void *p;
    p = malloc(size);
    if( p == NULL){
        fprintf(stderr, "Memoria insuficiente");
        exit(1);
    }
    return p;
}

int main(int argc, char *argv[]){
    int *p;

    p = malloc_s(sizeof(int)); // aloca memória para um inteiro
    *p = 9; // atribui 9 ao inteiro apontado por p
    printf("%d\n", *p); // imprime o valor apontado por p
    free(p); // libera a memória alocada
    return 0;
}