#include "stdio.h"

int printsum(int a, int b){
  printf("The Summary is: %d",a+b);
  printf("\n\n\n");
}

int main(){
  printf("\n\n This program will summarize two intergers given by the user.\n");
  int a;
  int b;
  printf("Enter the firt integer number to summarize, then press Enter key: ");
  scanf("%d",&a);
  printf("Enter the second integer number to summarize and press Enter key: ");
  scanf("%d",&b);
  printsum(a,b);
  return 0;
}
