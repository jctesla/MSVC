#include <stdio.h>

int fibonacci(int num);

int main(void){
    
  int num=-1;
  do{
    printf("Ing nro (serie Fibonacci):");
    scanf("%d",&num);
  } while(num <0);

  printf("Imprime %d elmentos en Fibonacci:\n\n",num);
  int rAct = fibonacci(num);

  printf("\nFactorial de %d = %d\n", num, rAct);
  return 0;
}

int fibonacci(int n){
  if (n<=1){
    return n;
  }
  int rAct=0,nAnt=1,nAct=0;
  int num = fibonacci(n-1) + fibonacci(n-2);

  printf("%d. nAnt=%d + nAct=%d = rslt=%d \n",c,nAnt,nAct,rAct); 
  return num;
}