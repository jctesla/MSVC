// NPOTA: este un C++ puro muy parecido al arduino c++
// https://www.geeksforgeeks.org/convert-character-array-to-string-in-c/
// en este caso 'cout' cumplela misma fucion q 'printf', pero 'printf' es mas formateable
#include<iostream>
#include<vector>
using namespace std;                                                // permite usar el 'cout'

int main(){

  //-------------------------------------------
  //    STRINGs
  //-------------------------------------------
  string sb = "hola" ;
  std::cout << "1.  sb = " << sb;
  cout << "\n--------------------------\n";

  //-----------------------------------------------
  // declaro un arreglo en formato estandar
  std::vector<std::string> arry={"1","2","3","4","5"};


  // agrego al final un item
  arry.push_back("a");
  printf("Elementos del Arry = %d\n",arry.size());


  // agrego un item en el indice q le indique
  arry.insert(arry.begin() + 1,"b");
  printf("Elementos del Arry = %d\n",arry.size());
  for(int i=0; i < arry.size();i++){
    cout << arry[i];
  }



  // remove the last item
  cout << "\n--------------------------\n";
  arry.pop_back();
  printf("Elementos del Arry = %d\n",arry.size());
  for(int i=0; i < arry.size();i++){
    cout << arry[i];
  }
  


  // clear all arry
  cout << "\n--------------------------\n";
  arry.clear();
  printf("Elementos del Arry = %d",arry.size());
 
}