#include "stdio.h"

int main(){
  printf("\n\n This program will summarize two intergers given by the user.\n");
  int a;
  int b;
  int c;
  printf("Enter the firt integer number to summarize, then press Enter key: ");
  scanf("%d",&a);
  printf("Enter the second integer number to summarize and press Enter key: ");
  scanf("%d",&b);
  c = a + b; // it works with spaces
  printf("The Summary is: %d",a+b); // it works w/o spaces and w/o c too
  printf("\n\n\n");
  return 0;
}
