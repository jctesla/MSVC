// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
#include<cstring>
using namespace std;

struct Tema {
  char* title;
  int year;
};

//---------------------------------------------
//            Main
//---------------------------------------------
/*
(->) : Este es un operador de desreferencia que se usa exclusivamente con punteros a objetos con miembros.
 Este operador sirve para acceder a un miembro de un objeto p q tenemos una referencia.
*/

int main (){                                  // NOTA:
  string mistr;                               // puntero *: alamacena direcciones de memoria', puntero sin * indica el contenido de esa direccion.
                                              // dir mem &: representa la direccion de memoria de un Obj o var. 

  Tema  amovie;                               // creo una ref del obj tipo de 'struct'
  Tema*  pmovie;                              // creo un puntero del tipo de 'struct'                           
  pmovie = &amovie;                           // asigno la dir del Obj 'struct' al puntero del tipo 'struct'

  cout << "Enter title: ";
  getline (cin, mistr);                       // ingreso un titulo, y lo asigno al contenido donde apunta el puntero 'pmovie'.Ej "PUNTERO"

  char arry[mistr.length() +1];
  pmovie->title = strcpy(arry, mistr.c_str());  // Copies string pointed by source into the array pointed by destination, including the terminating null characte

  cout << "Enter year: ";                       // ingrese un año, y lo asigno al int 'year' de la struct q pertenece. Ej 2022
  getline (cin, mistr);
  pmovie->year = std::stoi(mistr);              // convert string to int

  // (int)pmovie->year   =   (int)(*pmovie).year
  printf("\nYou have entered: %s   %d\n", pmovie->title,(int)(*pmovie).year);     

  return 0;
}

