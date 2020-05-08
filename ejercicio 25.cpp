#include <iostream>

using namespace std;

float superficie(int a, int b){
	int superf, m;
	
	m=a*b;
	return superf=m/2;
	
	 	
}

int main() {
	int a, b, sup;
	cout<<"Ingrese altura del triangulo: "<<endl;
	cin>>a;
	cout<<"Ingrese base del triangulo: "<<endl;
	cin>>b;
	 sup=superficie(a, b);
	 cout<<"la superficie es: "<<sup<<endl;
	
	return 0;
}
