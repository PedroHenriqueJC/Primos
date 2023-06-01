#include <stdio.h>
#include <stdlib.h>

void verificarPrimo(int x){
  for(int i = 2; i<x; i++){
    if(x%i == 0){
      break;
    }else if(x/i < i){
      printf("%d\n", x);
      break;
    }
  }
}
void main(){
  for(int y = 3; y<1000000000;y++){
    verificarPrimo(y);
  }
}
