#include <stdio.h>

int imprime(char *s){
    while(*s){
        putchar(*s++); // imprime o caractere e incrementa o ponteiro
    }
}

int main(){
    int a[] = { 2017, 2018, 2019, 2020 };
    char s[] = "Hello World";
    for (int i = 0; i<4; i++){
        // printf("%d\n", a[i]); // acessando item de um array
        printf("%d\n", *(a+i)); // acessando item de um array com ponteiro
        printf("%p\n", a+i); // endereço de memória do item
    }
    imprime(s);
    return 0;
}
