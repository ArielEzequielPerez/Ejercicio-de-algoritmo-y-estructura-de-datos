#include <iostream>

using namespace std;

int main() {
	int num, max;
	for(int i=0; i<5; i++){
		cout<<"ingrese numero: "<<endl;
		cin>>num;
		
		if(i==0){
			max=num;
		}else{
			if(num>max){
				max=num;
			}
		}
	}
	cout<<"el numero maximo es: "<<max<<endl;
	return 0;
}
