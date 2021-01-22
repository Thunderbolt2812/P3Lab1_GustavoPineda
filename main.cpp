#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int opcion = 0;
	while(opcion!=3){
		cout<<"Ingrese la opcion de ejercicio que desea ejecutar"<<endl;
		cout<<"1. Ejercicio Sumatoria"<<endl;
		cout<<"2. Ejercicio Funcion Sigmoide"<<endl;
		cout<<"3. Salir Corriendo"<<endl;
		cin>>opcion;
		if(opcion==1){
			
			int num,total=0;
			
			cout<<"Sumatoria"<<endl;
			cout<<"Ingrese un numero"<<endl;
			cin>>num;
			
			if(num>0){
				for(int i=0;i<=num;i++){
					total+=i*pow(i+1,2);
				}
				cout<<"S("<<num<<")"<<" = "<<total<<endl;
			}else{
				cout<<"No se aceptan numeros negativos ni 0"<<endl;
			}
		}else if(opcion==2){
			int num;
			double total;
			
			cout<<"Funcion Sigmoide"<<endl;
			cout<<"Ingrese un numero"<<endl;
			cin>>num;
			
			total = 1/(1+(exp(num)));
			
			cout<<"f("<<num<<")"<<" = "<<total<<endl;
		}
	}
	
	return 0;
}
