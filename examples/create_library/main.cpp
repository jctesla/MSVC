#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include "./morse.h"

using namespace std;

int main(){
  Morse morse("instancia 1");
  morse.dot();morse.dot();morse.dot();
  morse.dash();morse.dash();morse.dash();
  morse.dot();morse.dot();morse.dot();
  printf("\nEl Saludo = %s\n",morse.getSld().c_str());
  Sleep(100);
}

/*
INICIO= instancia 1
***___***
*/
