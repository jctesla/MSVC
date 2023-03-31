/*
La Palabra clave 'auto' es una variable que tiene una duración local.
Use 'auto' en lugar de un tipo para declarar una variable.
'auto' es un marcador de posición para un tipo, pero no es en sí mismo un tipo.
'auto' es una manera sencilla de declarar una variable que tiene un tipo complicado.
x Ej, se puede usar auto para declarar una variable en la que la expresión de inicialización implica plantillas, punteros a funciones o punteros a miembros.

En el ejemplo anterior, 'myAuto' es , int, NO una int referencia, por lo que la salida es 11 11,
no 11 12 como sería el caso si el calificador de referencia no hubiera sido eliminado por auto
*/
#include <iostream>
#include <typeinfo>

using namespace std;

int main( ){

    // ref la dir mem de un valor
    int cnt = 10;                                   // asigno un valor
    int& cntRef = cnt;                              // asigno la dir de mem del valor
    
    printf("Valor de cnt=%d \n",cnt);               // 10
    printf("Valor de cntRef=%d \n",cntRef);         // 10
    
    cntRef = 11;
    printf("\nContador cnt = %d \n",cnt);           // 11
    cnt = 19;
    printf("\nContador cntRef = %d \n\n",cntRef);   // 19
    
    // usando la declaracion de auto
    auto myAutoI = cntRef;                           // asigno la dir 
    printf("\nContador myAutoI = %d",cnt);      // 19
}