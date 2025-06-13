#include<stdio.h>

int main() {
    printf("Hola mundo");
    printf("\nComo estas?");
    printf("\Octavio estuvo aquí");
}

int suma(int n){
    if(n==0) return 0;
    return n + suma(n-1);
}

int dif(int a, int b){
    return a-b;
}
