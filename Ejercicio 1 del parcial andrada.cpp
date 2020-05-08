#include <iostream>

using namespace std;

struct votosLista{
	int NumeroDeMesa;
	int ListaDeCandidatos;
	int Votos;
};

struct Recuento{
	int Lista;
	int CantidadDeVotos;
};

void CrearArchivo(votosLista reg){
	int respuesta;
	FILE*f=fopen ("votos","wb+");
	cout<<"cargar archivo: (2 fin)"<<endl;
	cin>> respuesta;
	while(respuesta!=2){
		
	 cout<<"Ingrese numero de lista: "<<endl;
	 cin>>reg.ListaDeCandidatos;
	 cout<<"Ingrese mesa: "<<endl;
	 cin>>reg.NumeroDeMesa;
	 cout<<"Ingrese voto: "<<endl;
	 cin>>reg.Votos;
	 
	 fwrite(&reg, sizeof(reg),1,f);
	 
	cout<<"cargar archivo: (S/N)"<<endl;
	cin>> respuesta;
	}
}


int main() {
	votosLista reg;
	Recuento r;
	
	CrearArchivo(reg);
		
	
	return 0;
}
