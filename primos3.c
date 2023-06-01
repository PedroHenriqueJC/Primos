#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verificarPrimo(int x){
  if(x%2 != 0){
    int result = sqrt(x)+3; //+3 usado somente para entrar no for sem nenhum erro
    for(int i = 3; i<result; i = i+2){
      if(x%i == 0){
        break;
      }else if(x/i < i){
        printf("%d\n", x);
        break;
      }
    }
  }
}
void main(){
  for(int y = 3; y<1000000000;y++){
	  verificarPrimo(y);
  }
}
