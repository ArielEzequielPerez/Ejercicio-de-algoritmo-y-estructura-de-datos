#include <iostream>

using namespace std;

int main() {
	int num, max;
	for(int a=1; a<5; a++){
		cout<<"ingrese numero: "<<endl;
		cin>>num;
		if(a=1){
			max=num;
		}else{
			if(num>max){
				max=num;
			}
		}
	}
	
	cout<<"el maximo numero es "<<max<<endl;
	
	return 0;
}
