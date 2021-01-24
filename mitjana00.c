//Autor: dacomo1920daw2
//Data i hora: 201911221223

#include <stdio.h>

int main() {
	int i=0;
	float suma=0.0;
	float mitjana=0.0;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='s';

	printf("CÀLCUL DE LA MITJANA DE N VALORS\n");
	while(consulta=='s') {
		i++;
		printf("Dòna la dada %i: ",i);
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (s/n): ");
		scanf(" %c",&consulta); 
	}
	mitjana=suma/numero_repeticions;
	printf("La mitjana resultant és: %.2f\n",mitjana);	
	return 0;
}
