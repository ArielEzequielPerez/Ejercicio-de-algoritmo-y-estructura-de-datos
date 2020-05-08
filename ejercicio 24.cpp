#include <iostream>

using namespace std;

int promedio(int a, int b, int c){
	
	int S, prom;
	
	S=a+b+c;
	
	prom=S/3;
	
	return prom;
	
}
int main() {
	int a, b, c, prom;

	cout<<"Ingrese numero: "<<endl;
	cin>> a;
	cout<<"Ingrese numero: "<<endl;
	cin>> b;
	cout<<"Ingrese numero: "<<endl;
	cin>> c;
	
	prom=promedio(a, b, c);
	
	cout<<"El promedio es: "<<prom<<endl;	

	return 0;
}
