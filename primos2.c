#include <stdio.h>
#include <stdlib.h>

void verificarPrimo(int x){
  if(x%2 != 0){
  
    for(int i = 3; i<x; i = i+2){
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
