#include <stdio.h>

int main(){
  int sum = 0, first = 1, second = 1;
  while(first + second <= 4000000){
    if((first + second) % 2 == 0){
        sum += first + second;
    }
    first += second;
    second = first - second;
  }
  printf("%d\n",sum);
  return sum;
}
