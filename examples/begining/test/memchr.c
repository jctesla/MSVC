// este un programa netamente en C (no C++),
// busca un chr en una cadena y devuelve apartir del chr encontrado
// toda la cadena restante. 
// comando : 'memchr'
// tutorial: G:\$LIBROS VARIOS\C++\C Tutorial de Web\C Standard Library Tutorial.pdf 

#include <stdio.h>
#include <string.h>
int main (){
  const char str[] = "Hola, este es un correo: jcdergan@aol.com";
  const char ch = '@';
  char *ret;
  ret = memchr(str, ch, strlen(str));
  printf("Muestra el str apartir del @ = %s", ret);
  return(0);
}