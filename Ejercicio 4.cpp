#include <iostream>
 using namespace std;
 
 int nacimiento(int fecha){
 	int F, fech;
 	F=fecha/100;
 	fech= F%100;
 	return fech;
 }
 
 int main (){
 	int fecha;
 	cout<<"ingrese fecha de nacimiento (aaaammdd)"<<endl;
 	cin>> fecha;
 	
 	 if(nacimiento(fecha)<=4){
 	 	cout<<"Es el primer cuatrimesre"<<endl;
	  } if(nacimiento(fecha)<=8){
	  	cout<<"es del segunto cuatrimestre"<<endl;
	  } else{
	  	cout<<"es del tercer cutrimestre "<<endl;
	  }
	  return 0;
 }
