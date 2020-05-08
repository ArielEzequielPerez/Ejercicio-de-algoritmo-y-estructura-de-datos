#include <iostream>

using namespace std;

int main() {
	int L1, L2, L3;
	cout<<"ingrese lado del triangulo: "<<endl;
	cin>> L1;
	cout<<"ingrese segundo lado del triangulo: "<<endl;
	cin>>L2;
	cout<<"ingrese tercer lado del triangulo: "<<endl;
	cin>> L3;
	
	if(L1==L2){
		if(L2==L3){
			cout<<"Es equilatero"<<endl;
		} else{
			cout<<"Es isoceles"<<endl;
		}
	}	
	
	if (L1=!L2 && L2=!L3){
		if(L3=!L1){
			cout<<"Es escaleno"<<endl;
		}
	}			
	return 0;
}
