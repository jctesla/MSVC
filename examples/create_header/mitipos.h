#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

// defino constantes.
#define MAXCAR 15
#define MAXPER 3

// defino tipos de datos.
typedef char Cadena[MAXCAR];

// defino un tipo de dato estructural.
typedef struct{
    Cadena nombre;
    Cadena Apellido;
    int edad;
    char sexo;
} Persona;

// ej:arreglo de elemntos del tipo Persona.
typedef Persona ListaPersonas[MAXPER];