#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int nummed;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;
    cin.ignore(); 
    Atleta* atletas = new Atleta[n];
    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << ":\n";
        cout << "Nombre del atleta: ";
        getline(cin, atletas[i].nombre);
        cout << "El Pais: ";
        getline(cin, atletas[i].pais);
        cout << "La disciplina: ";
        getline(cin, atletas[i].disciplina);
        cout << "El numero de medallas: ";
        cin >> atletas[i].nummed;
        cin.ignore();
    }

    string paisBuscado;
    cout << "\nIngrese el pais a buscar: ";
    getline(cin, paisBuscado);

    cout << "\nAtletas de " << paisBuscado << ":\n";
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (atletas[i].pais == paisBuscado) {
            cout << "-----------------------------------\n";
            cout << "Nombre: " << atletas[i].nombre << "\n";
            cout << "Disciplina: " << atletas[i].disciplina << "\n";
            cout << "Medallas: " << atletas[i].nummed << "\n";
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontraron atletas de " << paisBuscado << ".\n";
    } else {
        Atleta* mejorAtleta = nullptr;
        for (int i = 0; i < n; i++) {
            if (atletas[i].pais == paisBuscado) {
                if (mejorAtleta == nullptr || atletas[i].nummed > mejorAtleta->nummed) {
                    mejorAtleta = &atletas[i];
                }
            }
        }
        if (mejorAtleta != nullptr) {
            cout << "-----------------------------------\n";
            cout << "El atleta con mas medallas de " << paisBuscado << " es " << mejorAtleta->nombre << " con " << mejorAtleta->nummed << " medallas.\n";
        }
    }

    delete[] atletas;
    return 0;
}