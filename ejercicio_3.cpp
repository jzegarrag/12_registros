#include<iostream>
#include<string>

using namespace std;

struct fechas
{
string nombre; 
int dia;
int mes;
int fecha;
};

 int main(){
 	int n;
 	int meses;
 	int i;
 	cout<<"ingrese la cantidad de personas: ";cin>>n;
 	
 	fechas personas[n];
 	
 	for (int i = 0; i < n; ++i) {
        cout << "Persona " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore();
        getline (cin,personas[i].nombre);
        cout << "Dia de nacimiento: ";
        cin >> personas[i].dia;
        cout << "Mes de nacimiento: ";
        cin >> personas[i].mes;
        cout << "fecha anual de nacimiento: ";
        cin >> personas[i].fecha;
    }
    
    while(true)
	{
    	cout<< "\nIngrese un numero de mes (0 para salir): ";
    	cin>>meses;
    	if (meses == 0){
    		break;
		}
	
		 cout << "Personas que cumplen edad en el mes " << meses << ":\n";
        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (personas[i].mes == meses) {
                cout << "Nombre: " << personas[i].nombre << "\n";
                cout << "Dia de nacimiento: " << personas[i].dia << "\n";
                cout << "fecha anual de nacimiento: " << personas[i].fecha << "\n";
                cout << "--------------------------\n";
                found = true;
            }
        }

        if (!found) {
            cout << "No hay personas que cumplen edad en este mes.\n";
        }
    }

    return 0;
}