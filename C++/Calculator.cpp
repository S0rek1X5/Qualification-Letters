#include<iostream>
using namespace std;
int main(){
	float cantidad,nota,suma=0,promedio;
	int i,opc;
	do{
		cout<<"------BIENVENIDO!!!------"<<endl;
		cout<<"Digite cuantas notas va a ingresar: "<<endl;cin>>cantidad;
		for(i=0;i<cantidad;i++){
			cout<<"\nIntroduzca su nota: "<<endl;cin>>nota;
			suma+=nota;
		}
		promedio=suma/cantidad;
		if(promedio>=90){
			cout<<"Su calificacion es\n-> A";
		}
		else if(promedio>=80){
			cout<<"Su calificacion es\n-> B";
		}
		else if(promedio>=70){
			cout<<"Su calificacion es\n-> C";
		}
		else if(promedio>=60){
			cout<<"Su calificacion es\n-> D";
		}
		else if(promedio<=59){
			cout<<"Su calificacion es\n-> F";
		}
		cout<<"\nDigite 1 para REINTENTAR - Digite 2 para SALIR: ";cin>>opc;
		cout<<"\n-----------------------------------------------\n";
	}while(opc==1);
	return 0;
}
