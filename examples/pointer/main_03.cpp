#include <iostream>
#include <string>
#include <sstream>
#include<cstring>
using namespace std;
 
struct Product{ 
    int id;
    float valor;
    char* nota;
};
 

int main(){
     struct Product* pm;
     struct Product am;
     pm = &am;             //pm = (struct Product*)malloc(sizeof(struct Product)); 

     string nota;
     do{
      printf("Ing NOTA: ");
      scanf("%s",&nota);
     }while(nota.length()>0);
     printf("Nota %s \n",nota);

     pm->id = 123;
     pm->valor = 125.45;
     pm->nota = (char*)"Producto Detergente";
     printf("\nID:%d  \nVALUE:%.1f  \nNOTA: %s", pm->id, pm->valor, (*pm).nota);

     return 0;
}