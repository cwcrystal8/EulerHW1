#include <stdio.h>

int main(){
  long num = 600851475143;
  int smallestEligiblePrime = 2;
  while(num > smallestEligiblePrime){
    if(num % smallestEligiblePrime == 0){
      num /= smallestEligiblePrime;
    }
    else{
      smallestEligiblePrime++;
    }
  }
  printf("%ld\n",num);
  return num;
}
