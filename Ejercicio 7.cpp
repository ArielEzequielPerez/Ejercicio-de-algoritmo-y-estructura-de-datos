#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int a, b, c, D, F, R;
	
	cout<<"Ingrese numero a"<<endl;
	cin>> a;
	cout<<"Ingrese numero b"<<endl;
	cin>> b;
	cout<<"ingrese numero c"<<endl;
	cin>> c;
	 
	D=(b*b);
	F=sqrt(4*a*c);
	R= D-F;
	if(R>=0){
		cout<<"Tiene raices"<<endl;
	}else{
		cout<<"No tiene raices"<<endl;
	}
	
	return 0;
}
