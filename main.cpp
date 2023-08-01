#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

// Grades-control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Alumn {
    string name;
    float grade;
};

/*Alumn RequireInfo(Alumn alumnList, int numberOfAlumns) {
    //initializate
    Alumn Field;
    for (int row = 0; row < numberOfAlumns; row++) {
        cout << "Enter name [" << row << "]: ";
        cin >> Field.name;
        cout << "Enter grade [" << row << "]: ";
        cin >> Field.grade;
        alumnList[row] = Field; //we insert the block to the index of array
        cout << "\n";
    }

    return *alumnList;
}
*/
int main()
{
    
    int numberOfAlumns;
    cout << "Enter the number of alumns: ";
    cin >> numberOfAlumns;

    Alumn* alumnList = new Alumn[numberOfAlumns];

    Alumn Field;
    for (int row = 0; row < numberOfAlumns; row++) {
        cout << "Enter name [" << row << "]: ";
        cin >> Field.name;
        cout << "Enter grade [" << row << "]: ";
        cin >> Field.grade;
        alumnList[row] = Field; //we insert the block to the index of array
        cout << "\n";
    }

    
    //Alumn **res = &alumnList;

   // RequireInfo(alumnList, numberOfAlumns);


    for (int row = 0; row < 2; row++) {
        cout << alumnList[row].name + "\n";
    }

    cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

