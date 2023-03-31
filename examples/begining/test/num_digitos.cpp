#include <iostream>
#include <string>
#include <stdio.h>

int main(void){
  int num=-1;
  do{
    printf("Cuantos digitos tiene un Numero\n");
    printf("Ing nro :");
    scanf("%d",&num);
  } while(num <0);

  int n = num;
  int nDig=0;
  while(n>0){
    nDig++;
    n = n / 10;
    printf("%d \n",n);
  }

  printf("No de Digitos calculador de %d = %d\n",num,nDig);

  //const char str[] = to_string(num);
  //printf("No de Digitos comando length(%d) = %d",num,strlen(str));
  return 0;
}