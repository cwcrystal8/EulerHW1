#include <stdio.h>

int main(){
  long num = 600851475143;
  int smallest_eligible_prime = 2;
  while(num > smallest_eligible_prime){
    if(num % smallest_eligible_prime == 0){
      num /= smallest_eligible_prime;
    }
    else{
      smallest_eligible_prime++;
    }
  }
  printf("%ld\n",num);
  return num;
}
