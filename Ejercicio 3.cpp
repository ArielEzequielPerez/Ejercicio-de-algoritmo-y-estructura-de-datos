#include <iostream>
 using namespace std;

int main() {
	int Mes;
	cout<<"Ingrese mes de nacimiento: "<<endl;
	cin>> Mes;
	if(Mes<=4){
		cout<<"Es del primer cuatrimestre"<<endl;
	} else {
	 if(Mes<=8){
		cout<<"es del segundo cuatrimestre"<<endl;
	}else{
		cout<<"es del tercer cuatrismestre"<<endl;
	}
}
	return 0;
}
