#include <iostream>

using namespace std;


struct Nodo{
	int info;
	Nodo *sgte;
};

void InsertarLista(Nodo*&, int);
void MostrarLista(Nodo*&);
int main() {	
	int n, a;
	Nodo*lista = NULL;
	cout<<"cantidad de numeros a ingresar"<<endl;
	cin>>a;
	for(int i=0; i<a; i++){
	cout<<"ingrese numero('mayor a cero')"<<endl;
	cin>>n;
	
	
	InsertarLista(lista, n);
	MostrarLista(lista);
	}	
	return 0;
}

void LlenarLista(Nodo*&lista, int num){

	Nodo*nuevo_nodo = new Nodo();
	nuevo_nodo->info=num;
	
	Nodo*aux1=lista;
	Nodo*aux2;
	
	while ((aux1 != NULL)&&(aux1->info <num)){
		aux2=aux1;
		aux1=aux1->sgte;
	}
	if(lista== aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->sgte = nuevo_nodo;	
	}
	nuevo_nodo->sgte =aux1;
}

void MostrarLista(Nodo*&lista){
	
	Nodo*actual=new Nodo();
	 actual=lista;
	 Nodo*menor; 
	 Nodo*mayor;
	 
	 while(actual!=NULL){
	 	
	 	if(menor <= actual->sgte ){
	 		menor=actual->sgte;	 		
		 }else{
		 	if(actual->sgte>= menor){
		 		mayor=actual->sgte;
		 		
			 }
		 }
		 
	 	actual = actual->sgte;	
}
cout<<"el numero mayor de la lista es: "<<mayor<<endl;
cout<<"el numero menor de la lista es: "<<menor<<endl;
}
