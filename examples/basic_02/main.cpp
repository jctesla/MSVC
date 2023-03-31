#include <stdio.h>
int main (void){

int a = 0;
printf("Do Loop a < 100 o a =20, Inicialmente a = %d:\n",a);

do{
  printf ("a = %d\n", a);
  a++;
  if (a == 20){
    printf("ahora a = 20, break:\n");
    break;
  }
} while (a < 100);

printf ("a = %d y genera BREAK \n", a);

}
