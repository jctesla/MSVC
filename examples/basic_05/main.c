#include <graphics.h>

// Driver Code
int main(int argc, char const *argv[]){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    circle(320,240,200);
    getch();
    closegraph();
    return 0;
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