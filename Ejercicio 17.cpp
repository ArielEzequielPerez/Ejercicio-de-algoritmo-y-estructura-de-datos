#include <iostream>

using namespace std;

int main() {
	char nombre[10];
	int horas, S=0;
	for(int i=0; i<5; i++){
		cout<<"Ingresar nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese horas extras: "<<endl;
		cin>> horas;
		
		while(horas!=0){
			S=S+horas;
			cout<<"Ingrese horas extras: "<<endl;
			cin>>horas;
		}
	}
	cout<<"la totla de horas extras: "<<endl;
	return 0;
}

