#include <stdio.h>

int main(){
  int a,b;
  for(a = 1; a < 999; a++){
    for(b = 1; b < 999; b++){
      int c = 1000 - a -b;
      if(a * a + b * b == c * c){
        printf("%d\n", (a * b * c));
        return a * b * c;
      }
    }
  }
  printf("Not Found\n");
  return 0;
}
