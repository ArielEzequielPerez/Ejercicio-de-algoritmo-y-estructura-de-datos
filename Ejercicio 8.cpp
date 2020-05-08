#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int a, b, c, D, F, R, x1, x2, P, P1;
	
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
		x1= -b+R;
		P=x1/2;
		x2= -b-R;
		P1=x2/2;
		cout<<"el valor de X1 es: "<<P<<endl;
		cout<<"el valor de X2 es: "<<P1<<endl;
	}else{
		cout<<"tiene raices imaginarias"<<endl;
}
	return 0;
}
