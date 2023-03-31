#include <stdio.h>

int dosDigitos(int num);

int main(void){
  int num=-1;
  do{
    printf("Ing nro (serie Fibonacci):");
    scanf("%d",&num);
  } while(num <0);

  printf("Imprime %d elmentos en Fibonacci:\n\n",num);
  
  int rAct=0,nAnt=1,nAct=0;
  for(int c=1; c<=num; c++){
    rAct = nAnt + nAct;

    printf("%d. nAnt=%d + nAct=%d = rslt=%d \n",c,nAnt,nAct,rAct);    
    nAct = nAnt;
    nAnt = rAct;
  }

  printf("\nFactorial de %d = %d\n", num, rAct);
  return 0;
}


int dosDigitos(int num=0){
  if 
  return num;
}