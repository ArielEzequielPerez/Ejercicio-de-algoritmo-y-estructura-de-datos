#include <iostream>

using namespace std;

int nacimiento(int fecha){
 	int F, fech;
 	F=fecha/100;
 	fech= F%100;
 	return fech;
}
int main(){
	
	char nombre[10];
	int fecha, mes, contD=0,contF, contO;
	
	for(int i=0; i<5; i++){
		cout<<"ingrese nombre: "<<endl;
		cin>>nombre;
		cout<<"Ingrese fecha de nacimiento: (aaaammdd)"<<endl;
		cin>>fecha;
	
	mes=nacimiento(fecha);
	 if(mes==12){
	 	contD++;
	 }else{
	 	if(mes==2){
	 		contF++;
		 }else{
		 	contO++;
		 }
	 }
	}
	cout<<"la cantidad de personas que cumplen en febrero es:"<<contF<<endl;
	cout<<"la cantidad de personas que cumplen en diciembre es:"<<contD<<endl;
	cout<<"la cantidad de personas que cumplen en otro mes es:"<<contO<<endl;
	
	return 0;
}
