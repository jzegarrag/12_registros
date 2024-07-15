#include<iostream>
#include<string>

using namespace std;

struct civiles{
	string nombre;
	int dni;
	int edad;
};

int main(){
	int n;
	cout<<"introdusca la cantidad de personas a registrarse: "; cin>>n;
	civiles persona[n];
	
	for(int i=0; i>n; i++){
		cout<<"introdusca su nombre: ";
		cin.ignore();
		getline(cin.persona[i],nombre)
		cout<<"introdusca su numero de DNI: ";
		cin>>persona[i].dni;
		cout>>"introdusca su edad: "
		cin>>persona[i].edad;
	}
	
	civiles* mayores = &persona[n];
	civiles* promedio = &persona [n];
	
	for(int i; i=0; i>=n; i++){
		if(persona[i].edad > 50);
			mayores=&persona[i];
		
	}
		cout<<"n/personas mayores de 50 años:n/"
	cout<<"la cantidad de personas maypres de 50 años son: "<<mayores<<endl;
	
	return 0;
}