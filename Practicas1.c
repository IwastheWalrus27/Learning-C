#include <stdio.h>
#include <stdlib.h>

void suma(int *ptr);

int main()
{	
	int num;
	int *ptrNum;
	num = 5;
	ptrNum = &num;
	
	printf("Antes: %i\n", num);
	suma(ptrNum);
	printf("Despues: %i\n", num);
	
	printf("%i",EXIT_SUCCESS );	
	
	return EXIT_SUCCESS;//EXIT_SUCCESS se encuentra en la libreria stdlib.h y vale 0
}

void suma(int *ptr)
{
	*ptr = *ptr + *ptr;
}
