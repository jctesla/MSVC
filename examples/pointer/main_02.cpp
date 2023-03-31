// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct foo{
  int x;
  float y;
};

//---------------------------------------------
//            Main
//---------------------------------------------
// (pointer variable)->(variable) = value;
int main (){ 
  struct foo var;
  struct foo* pvar;
  pvar = &var;
     
  var.x = 5;                                                       // asignacion directa
  pvar->y = (float)14.3;                                           // asign x Objeto
  printf("foo.x=%d / foo.y=%f \n",(int)pvar->x,(float)pvar->y);    // foo.x=5 / foo.y=14.300000(base)

  (*pvar).x = 6;                                                   // asig puntero.valor 
  (&var)->y = (float)15.6;                                         // asig dirmem.var
  printf("foo.x=%d / foo.y=%f \n",(int)pvar->x,(float)pvar->y);    // foo.x=5 / foo.y=15.600000(base)
}


// malloc:
// Allocates a block of size(bytes) of memory, returning a pointer to the beginning of the block.
