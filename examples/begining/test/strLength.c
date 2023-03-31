// este un programa netamente en C (no C++),
// Verifica el largo de una cadena. 
// comando : strlen(a)
// tutorial: G:\$LIBROS VARIOS\C++\C Tutorial de Web\C Standard Library Tutorial.pdf

#include <stdio.h>
#include <string.h>
int main(){
    // Ejemplo 01:
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %d \n",strlen(a));
    printf("Length of string b = %d \n",strlen(b));

    // Ejemplo 02:
    char s[1000];
    int c = 0;
    printf("\nInput a string: ");
    gets(s);
    while (s[c] != '\0')
      c++;

    printf("Length of the string: %d\n", c);
    return 0;
}