#include "stdio.h"

void loop() {
  printf(" My name is Yon Yonson, \nI come from Wisconsin. \nI work in a lumber yard there. \nEveryone that I meet \nWhen I walk down the street, \nSays Hello! What's your name? \nAnd I say:");
  loop();
}

int main(){
  loop(1);
  return 0;
}
