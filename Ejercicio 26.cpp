#include <iostream>

using namespace std;
int Factorial(int num){
	int aux=0, num1;
	aux=num;
	while(aux=<1){
		num1=num-1;
		num=num*num1;
		aux--;
	}
	return num;	
}
int main() {
	int num, fact;
	cout<<"Ingrese numero: "<<endl;
	cin>>num;
	if(num==0){
		cout<<"El factorial de 0 es 1"<<endl;
	} else{
		fact = Factorial(num);
		cout<<"El factorial del numero es: "<<fact<<endl;
	}
	 
	return 0;
}
