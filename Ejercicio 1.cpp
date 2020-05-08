#include <iostream>

using namespace std; 

int main() {
	int Importe, Cuota;
	float res;
	
	cout<<"ingrese importe"<<endl;
	cin>>Importe;
	cout<<"eligir forma de pago: "<<endl;
	cout<<"ingrese 1(una cuota), 2(en 2 coutas) o 3 (6 coutas)"<<endl;
	cin>>Cuota;
	if(Cuota==1){
		cout<<Importe<<endl;
	}else{
	if(Cuota==2){
		res=Importe/2;
		cout<<res<<endl;
	}else{
		res=Importe/6;
		cout<<res<<endl;
	}
}
	
	return 0;
}
