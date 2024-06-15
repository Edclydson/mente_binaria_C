#include <stdio.h>
#include <stdlib.h>
//MALLOC TRADICIONAL
int main(int argc, char *argv[]){
    int *p;

    p = malloc(sizeof(int)); // aloca memória para um inteiro
    if (p == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }
    *p = 9; // atribui 9 ao inteiro apontado por p
    printf("%d\n", *p); // imprime o valor apontado por p
    free(p); // libera a memória alocada
    return 0;
}