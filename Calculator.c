#include <stdio.h>
int main ()
{	
	float suma, promedio;
	int i,cant,cal1, rep;
	do{
		printf("Bienvenido!!!\n");
		printf("\nDigite la cantidad de notas que va a ingresar\n: ");scanf("%d",&cant);
		suma=0.0;
		for(i=0;i<cant;i++){
			printf("\nDigite su calificacion %i\n: ", i+1);scanf("%d",&cal1);
			suma=suma+cal1;
		}
		promedio=suma/cant;
		if(promedio>=90){
			printf("Su calificacion es\n->A");
		}
		else if(promedio>=80){
			printf("Su calificacion es\n->B");
		}
		else if(promedio>=70){
			printf("Su calificacion es\n->C");
		}
		else if(promedio>=60){
			printf("Su calificacion es\n->D");
		}
		else if(promedio<=59){
			printf("Su calificacion es\n->F");
		}
		printf("\nDigite 1 para CONTINUAR --- 2 para SALIR: ");scanf("%d",&rep);
		printf("\n----------------------------------\n");
	}while(rep==1);
	return 0;
}
