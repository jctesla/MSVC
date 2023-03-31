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

/*
1º Compilamos: este 'main.c' :
D:\CppSpace\mingGW-64\basic_04>gcc -o maincpy.c main.c

2º resultado arroja 'maincpy.c' compilado, lo corremos:
D:\CppSpace\mingGW-64\basic_04>maincpy.c
Do Loop a < 100 o a =20, Inicialmente a = 0:
a = 0
a = 1
a = 2
a = 3
...
ahora a = 20, break:
a = 20 y genera BREAK

D:\CppSpace\mingGW-64\basic_04>

*/