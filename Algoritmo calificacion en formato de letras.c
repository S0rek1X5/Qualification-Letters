#include <stdio.h>
int main ()
{
		//Calcular calificaciones en A, B, C, D y F
		
	float nota1, nota2, nota3, nota4, nota5, promedio;
	printf("Introduzca la primera nota\n-> ");
	scanf("%f",&nota1);
	printf("Introduzca la segunda nota\n-> ");
	scanf("%f",&nota2);
	printf("Introduzca la tercera nota\n-> ");
	scanf("%f",&nota3);
	printf("Introduzca la cuarta nota\n-> ");
	scanf("%f",&nota4);
	printf("Introduzca la quinta nota\n-> ");
	scanf("%f",&nota5);
	promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	
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
	return 0;
	
}
