#include <iostream>

using namespace std;

int main(){
	int num, sum=0;
	for(int a=1; a<100; a++){
		cout<<"Ingresar numero: "<<endl;
		cin>> num;
		 if(num>=0){
		 	sum= sum+num;
		 }
	}
	cout<<"la suma es: "<<sum<<endl;
	
	return 0;
}
