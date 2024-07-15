#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct civiles{
	string nombre;
	int dni;
	int edad;
};

int main(){
	int n;
	int contadorMayores=0;
	int sumaEdades=0;
	
	cout<<"introdusca la cantidad de personas a registrarse: "; cin>>n;
	civiles persona[n];
	
	for(int i=0; i<n; i++)
	{
		 cout << "Persona " << i + 1 << ":\n";
		cout<<"introdusca el nombre: ";
		cin.ignore();
		getline(cin,persona[i].nombre);
		cout<<"introdusca su numero de DNI: ";
		cin>>persona[i].dni;
		cout<<"introdusca su edad: ";
		cin>>persona[i].edad;
	
			sumaEdades += persona[i].edad;

        if (persona[i].edad > 50) {
            contadorMayores++;
            
        }
	};
	
		double promedioEdades = static_cast<double>(sumaEdades) / n;
		
	
		cout<<"personas con edad mayor a 50:"<<endl;
		 cout << "\nCantidad de personas mayores de 50 : " << contadorMayores << "\n";
	  	 cout << "Promedio de edades: " << promedioEdades << "\n";
	  	 
	  	  cout << "\nDatos de las personas ingresadas:\n";
    for (const auto& civiles : persona) 
	{
        cout << "Nombre: " << civiles.nombre << "\n";
        cout << "DNI: " << civiles.dni << "\n";
        cout << "Edad: " << civiles.edad << "\n";
        cout << "--------------------------\n";
	}
	return 0;
}