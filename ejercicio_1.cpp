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
	
	cout<<"ingrese la cantidad de empleados: "; cin>>e;
	
	empleado personas[e];
	for(int i = 0 ;i < e ; i++)
	{
			cout<<"nombre del empleado: ";
		cin.ignore();
		getline(cin,personas[i].nombre);
			cout<<"sueldo del empleado: ";
		cin>>personas[i].sueldo;
			cout<<"sexo del empleado masculino o femenino: ";
		cin.ignore();
		getline(cin,personas[i].sexo);
	}
	empleado* mayorSalario = &personas[0];
    empleado* menorSalario = &personas[0];
    
     for (int i = 1; i < e; ++i) {
        if (personas[i].sueldo > mayorSalario->sueldo) {
            mayorSalario = &personas[i];
        }
        if (personas[i].sueldo < menorSalario->sueldo) {
            menorSalario = &personas[i];
        }
    }
    
    cout << "\nEmpleado con mayor salario:\n";
    cout << "Nombre: " << mayorSalario->nombre << "\n";
    cout << "Sexo: " << mayorSalario->sexo << "\n";
    cout << "Sueldo: " << mayorSalario->sueldo << "\n";

    cout << "\nEmpleado con menor salario:\n";
    cout << "Nombre: " << menorSalario->nombre << "\n";
    cout << "Sexo: " << menorSalario->sexo << "\n";
    cout << "Sueldo: " << menorSalario->sueldo << "\n";
	return 0;
	
}