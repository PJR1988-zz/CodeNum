#include </opt/CodeNum/ejecucion.h>
#include </opt/CodeNum/byebye.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int b;

	system("clear");

	printf("\x1B[34m \n				======================================");
	printf("\n				*                                    *\n				* Escrito por Pablo Jimenez Rebollo. *\n				*     Numero de matricula 15782.     *\n				*    Grado en Ingenieria Quimica.    *\n				*                                    *\n");
	printf("				======================================\n");

	printf("\x1B[0m \nEste programa pasa cualquier numero mayor que cero en cualquier base a bases decimal y a otra base indicada por el usuario.");
	printf("\nIndique en que base esta el numero, introduzca cero para salir: ");
	scanf("%d", &b);

	ejecucion(b);

	adios();

	return 0;

}
