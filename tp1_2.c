#include <stdio.h>

int cuadrado(int n){
    return n * n;
}

void pcuadrado( int *pn){
    *pn= *pn * *pn;
}

void leer(int v){
    printf("La direccion de la variable es: %p\n", &v);
    printf("El contenido de la variable es: %d\n", v);
}

void invertir(int a, int b){
    int *pa= &a, *pb= &b, aux;
    aux= a;
    *pa= b;
    *pb= aux;
}

void orden(int a, int b){
    int *pa= &a, *pb= &b;
    if (a > b)
    {
        int aux=a;
        *pa= b;
        *pb= aux;
    } 
}

int main(){
    int a= 10, b=5;
    printf("con respecto a a...\n");
    leer(a);
    printf("con respecto a b...\n");
    leer(b);
    orden(a, b);
    printf("los valores ordenados de menor a mayor son: %d, %d\n", a, b);
    invertir(a, b);
    printf("si invierto el orden me queda: %d, %d", a, b);
    return 0;
}