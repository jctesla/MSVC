#include<iostream>
#include "./graphics.h"
#include<stdlib.h>
#include<stdio.h>
//#include<conio>
int main(void)
{
       /* request auto detection */
       int gdriver = DETECT, gmode, errorcode;
       int midx, midy;
       int radius = 100;

       /* initialize graphics and local variables */
       // D:\CppSpace\examples\basic_01\grafico\winbgim
       // D:\\CppSpace\\examples\\basic_01\\grafico\\winbgim
       // initgraph(&gdriver, &gmode, "C:\\Program Files (x86)\\Dev-Cpp\\MinGW64\\include\\winbgim");
       initgraph(&gdriver, &gmode, "D:\\CppSpace\\examples\\basic_01\\grafico\\winbgim");
       
       /* read result of initialization */
       errorcode = graphresult();
       if (errorcode != grOk)  /* an error occurred */
       {
           printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(midx, midy, radius);
   
   /* clean up */
   getch();
   closegraph();
   return 0;
}