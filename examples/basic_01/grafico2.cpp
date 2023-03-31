#include <stdio.h>
#include "../basic_01/grafico/graphics.h"
#include <stdlib.h>
#include <conio.h>

int main(){

  /* Variable declaration */
  int gdriver, gmode;
  int x, y, radius;

  /* variable initialization */
  gdriver = DETECT;

  /* Graph initialization */
  initgraph(&gdriver, &gmode, "d:\\turboc3\\bgi");

  /* Set the color of the circle */
  setcolor(CYAN);

  /* Draw the CIRCLE */
  x = 200;
  y = 300;

  radius = 100;
  circle(x, y, radius);
  getch();

  /* close the graph */
  closegraph();
  return 0;

}