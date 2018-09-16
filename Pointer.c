#include <stdio.h>
#include <stdlib.h>


int main(){

  unsigned int x = 3000000000;
  char * y = &x;

  printf("Original: %x \n" ,x);

  for(int i = 0; i < 4; i++){
    printf("Bytes: %hhx\n",*y);
    y++;
  }

  for(int i = 0; i < 4; i++){
    *y++;
    y++;
  }
  printf("Increment by 1: %hhx\n",*y);


  for(int i = 0; i < 4; i++){
    *y+=16;
    y++;
  }
  printf("Increment by 16: %hhx\n",*y);
  
  return 0;
}
