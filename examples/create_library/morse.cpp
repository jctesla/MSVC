#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include "./morse.h"
using namespace std;





// Constructor
//Morse::Morse(char simb){
Morse::Morse(){
  printf("Inicio Morse\n");
  //_simb = simb;
}


// Metodos
void Morse::dot(){
  digitalWrite("*", 1);         // digitalWrite(_simb, 1);
  Sleep(250);                  // delay(250);
  digitalWrite("*", 0);         // digitalWrite(_simb, 0);
  Sleep(250);                  // delay(250);
}

void Morse::dash(){
  digitalWrite("*", 1);         // digitalWrite(_simb, 1);
  Sleep(1000);                  // delay(1000);
  digitalWrite("*", 0);         // digitalWrite(_simb, 0);
  Sleep(250);                  // delay(250);
}


void digitalWrite(char simb, bool nivel){
  if (nivel){
    printf("%c",simb);
  }else{
    printf("_"); 
  }
}