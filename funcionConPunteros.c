#include <stdio.h>
#include <stdlib.h>

//Hare una funcion que tome como argumento un puntero (pointer)
void square(int *ptrN);


int main()
{		
	int num;
	num = 6;
	
	printf("El valor de num es: %i\n", num);
	
	square(&num);//Se pasa como argumento la direccion de num
	
	printf("El cuadrado de num es: %i\n", num);
	
	system("pause");
	return 0;
}

void square(int *ptrN)//El parametro es un puntero, al que se le va a pasar la direccion de la variable
{
	*ptrN = (*ptrN)*(*ptrN);/*Esto es: "Dereferencia el valor que esta en ese lugar de memoria, y multiplicalo
							por si mismo; y ahora ese sera el valor que este en ese lugar en memoria".*/
}
