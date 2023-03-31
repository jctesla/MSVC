/*
  Morse.h - Library for flashing Morse code.
  En los header files puedes declarar p q pueda usar funciones, clases, lo que sea que no esté definido en su archivo fuente.
*/
#include <windows.h>
#include <iostream>
#include <string>                         // std::string, std::to_string
using namespace std;

#ifndef _Morse                            // Morse_h      
#define _Morse                            // Morse_h

class Morse{
    public:
          Morse(string sld);                        // constructor
          /* Tambien se puede declarar así:          // constructor
          Morse(string sld){                        
            printf("INICIO= %s\n",sld.c_str());
          }
          */
          void dot();
          void dash();
          string getSld();
          
    private:
          string _sld;
          void digitalWrite(char simb, bool nivel);
};

//---------------------------------------------
//          DESAROOLLO METHS y FUNCT
//---------------------------------------------

Morse::Morse(string sld){                             // constructor
   printf("INICIO= %s\n",sld.c_str());
   _sld = sld;
}

string Morse::getSld(){
   return _sld;
}

void Morse::dot(){                                    // Meth      
  digitalWrite('*', 1);
  Sleep(250);                                         // delay(250);
}


void Morse::dash(){                                    // Meth      
  digitalWrite('_', 0);
  Sleep(1000);
}


void Morse::digitalWrite(char simb, bool nivel){      // FUNC de uso General privado
  if (nivel){
    printf("%c",simb);
  }else{
    printf("_"); 
  }
}


#endif