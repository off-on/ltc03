#include "stdio.h"

void loop(int count) {
   printf("\n%d bottles of beer on the wall, %d bottles of beer.",count,count);
   printf("\nTake one down, pass it around, ");
   if ( count==1 ) {
     printf("no more bottles of beer on the wall...");
     printf("\n\nNo more bottles of beer on the wall, no more bottles of beer.");
     printf("\nWe've taken them down and passed them around; now we're drunk and passed out!\n\n");
     return;
   } else {
     printf("%d bottles of beer on the wall...\n",count-1);
     loop(count-1);}
}

int main(){
  loop(99);
  return 0;
}
