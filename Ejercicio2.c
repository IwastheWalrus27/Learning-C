#include <stdio.h>

#define TO_UPPER 32

void toUpper(char *ptrStr, const unsigned int size);
unsigned int length(char *ptrStr);

int main()
{	
	char myString[] = "Hola";
	unsigned int stringSize = length(myString);
	
	printf("%s\n",myString);
	
	toUpper(myString, stringSize);
	
	printf("%s",myString);
	return 0;	
}

void toUpper(char *ptrStr, const unsigned int size)
{
	for (int i = 0; i< size; i++)
	{
		if(*(ptrStr + i) <= 'z' && *(ptrStr + i) >= 'a')
		{
			*(ptrStr + i) -= TO_UPPER;
		}
	}
		
}

unsigned int length(char *ptrStr)
{	
	unsigned int len = 0;
	for (int i =0; *(ptrStr + i)!= '\0';i++)
	{
		len++;
	}
	return len;
}
