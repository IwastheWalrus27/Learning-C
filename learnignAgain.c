#include <stdio.h>
#include <stdlib.h>



int main()
{	
	int i; //Esta es una declaracion
	i = 1;//Esta es una asignacion
	int *ptri;
	ptri = &i;
	
	i = 3000;
	
	printf("Este es el valor de la variable i: %i\nEste es el valor del apuntador ptri dereferenciado: %i", i, *ptri);
	printf("\nEsta es la dirreccion de memoria(ptri): %p", ptri);
	printf("\nEsta es la dirreccion de memoria(i): %p", &i);
	//printf("Este es el valor entero de NULL: %i", NULL);
	
	printf("\n%p", ptri );
	return 0;
}
