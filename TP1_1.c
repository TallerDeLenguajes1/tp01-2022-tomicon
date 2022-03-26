#include <stdio.h>

int main(){
printf("hola mundo");
int variable;
int *pvariable= &variable;
printf("El contenido del puntero es: %p\n", pvariable);
printf("La dirección de memoria almacenada por el puntero es: %p\n", pvariable);
printf("la dirección de memoria de la variable es: %p\n", pvariable);
printf("la dirección de memoria del puntero es: %p\n", &pvariable);
printf("el tamaño de memoria utilizado por la variable es %d", sizeof(int));

return 0;
}
