#include <stdio.h>
int main ()
{	
	//Calculo de promedio basico
	
	float cal1, cal2, cal3,cal4, cal5, fin;
	int cont = 1;
	
	//Bloque de instrucciones
	printf("\nIntroduzca la primera calificacion %d:", cont);
	scanf("%f",&cal1);
	cont = cont+1;
	
	printf("\nIntroduzca la segunda calificacion %d:", cont);
	scanf("%f",&cal2);
	cont = cont+1;
	
	printf("\nIntroduzca la tercera calificacion %d:", cont);
	scanf("%f",&cal3);
	cont = cont+1;
	
	printf("\nIntroduzca la cuarta calificacion %d:", cont);
	scanf("%f",&cal4);
	cont = cont+1;
	
	printf("\nIntroduzca la quinta calificacion %d:", cont);
	scanf("%f",&cal5);
	cont = cont+1;
	
	//Calcular promedio
	fin = (cal1+cal2+cal3+cal4+cal5)/5;
	printf("Su promedio final del es:%1.2f", fin);
	return 0;
	}
