#include <iostream>

using namespace std;

int main() {
	
	int num, a=0, mult;
	 for(int i=0; i<6; i++){
	 	cout<<"ingrese numero: "<<endl;
	 	cin>>num;
	 	
	 	if(num>0){
	 		mult= num%3;
	 		if(mult==0){
	 			a=a+1;
			 }
		 }
	 }
	 if(a=0){
	 	cout<<"no hay multiplos de 3"<<endl;
	 } else{
	 	cout<<"si hay multiplos de 3 y la cantidad es: "<<a<<endl;
	 }
	
	return 0;
}
