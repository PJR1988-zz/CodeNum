#include </opt/CodeNum/ejecucion.h>
#include </opt/CodeNum/byebye.h>
#include <hola.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int b;

	hola();

	printf("\nEste programa pasa cualquier numero mayor que cero en cualquier base a bases decimal y a otra base indicada por el usuario.");
	printf("\nIndique en que base esta el numero, introduzca cero para salir: ");
	scanf("%d", &b);

	ejecucion(b);

	adios();

	return 0;

}
