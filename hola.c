#include<stdio.h>

int main() {
    printf("Hola mundo");
    printf("\nComo estas?");
}

int factorial(int n){
    if(n==0) return 1;
    return n* factorial(n-1);
}
