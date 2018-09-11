#include <stdio.h>

int main(){

  int index = 1, max = 1;
  int i;
  for(i = 2; i < 1000000; i++){
    int chain_length = 1;
    long current_num = i;
    while(current_num != 1){
      chain_length += 1;
      if(current_num % 2 == 0){
        current_num /= 2;
      }
      else{
        current_num = 3 * current_num + 1;
      }
    }
    if(chain_length > max){
      max = chain_length;
      index = i;
    }
  }
  printf("%d\n",index);
  return index;
}


/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

: Once the chain starts the terms are allowed to go above one million.
*/
