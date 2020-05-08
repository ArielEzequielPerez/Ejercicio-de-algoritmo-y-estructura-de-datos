#include<iostream>
using namespace std;
int main(){
	
	int num, max;
	
	for(int i=0; i<5; i++){
		cout<<"ingreesar numeros: "<<endl;
		cin>> num;
		 if(num>0){
		 	
		 	if(i==0){
		 		max=num;
			 }else{
			 	if(num>max){
			 		max=num;
				 }
			 }
		 	
		 }
	}
	cout<<"El numero mayor es: "<<max<<endl;
	
	return 0;
}
