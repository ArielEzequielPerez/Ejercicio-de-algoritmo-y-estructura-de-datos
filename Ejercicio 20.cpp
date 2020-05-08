#include <iostream>

using namespace std;

int main(){
	int cod, Import, r,  imp, A, acum2=0, acum3=0;
	
	cout<<"Ingrese codigo: (1, 2, 3)"<<endl;
	cin>>cod;
	cout<<"Ingrese importe: "<<endl;
	cin>>Import;
	
	while (cod!=3){
		if(cod==1){
			imp= Import*0.1;
			r=Import-(imp);
			if(r>200){
				acum2++;
			} acum3++;
		}else{
			cout<<"el importe es: "<<Import<<endl;
		}
	}
	A=acum2/acum3;
	cout<<"importe con descuento es: "<<A*100<<endl;
	return 0;
}
