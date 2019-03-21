#include "stdio.h"

void loop( int count) {
  printf(" My name is Yon Yonson, \nI come from Wisconsin. \nI work in a lumber yard there. \nEveryone that I meet \nWhen I walk down the street, \nSays Hello! What's your name? \n And I say: %d",count);
  loop( count+1 );
}

int main(){
  loop(1);
  return 0;
}
