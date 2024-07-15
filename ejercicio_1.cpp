#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
	struct empleado
	{
	string nombre;
	float sueldo;
	string sexo	;
	};
int main(){
	int e;
	int i;
	float sueldo;
	
	cout<<"ingrese la cantidad de empleados: cin>>e;
	
	empleado personas[e];
	for(int i = 0 ;i < e ; i++)
	{
	
		fflush(stdin);
			cout<<"nombre del empleado: ";
		cin.ignore();
		getline(cin,personas[i].nombre);
			cout<<"sueldo del empleado: ";
		cin>>sueldo;
			cout<<"sexo del empleado masculino o femenino: 
		cin.ignore();
		getline(cin,personas[i].sexo);
	}
	
	return 0;
	
}