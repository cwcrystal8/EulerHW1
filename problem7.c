#include <stdio.h>

int isPrime(long num){
  int i;
  for(i = 2; i <= num / 2; i++){
    if(num % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  long num = 2, place = 1;
  while(place != 10001){
    num++;
    if(isPrime(num)){
      place++;
    }
  }
  printf("%ld\n",num);
  return num;
}
