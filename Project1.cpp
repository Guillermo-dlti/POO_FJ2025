// Project1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Compiler : msvc(actual one here), g++ (gcc), clang
//IDE - integrated develpoment environment: visual studio

// :: - scoper solution operator
// <> used for standard library headers or libraries installed in your OS
// " " for your own headers and files in your source tree
#include <iostream>
#include "Animal.h"
using namespace std;



// main function
int main()
{
    cout << "Hello World!\n";

    Animal dog;
    dog.setName("Bambu");
    cout << dog.getName() << endl;
    cout << dog.add(2, 3) << endl;

    Animal cat("cat", 10, 5);
    cat.eat();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
