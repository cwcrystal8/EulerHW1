#include <stdio.h>

int main(){

  int index = 1, max = 1;
  int i;
  for(i = 2; i < 1000000; i++){
    int chainLength = 1;
    long currentNum = i;
    while(currentNum != 1){
      chainLength += 1;
      if(currentNum % 2 == 0){
        currentNum /= 2;
      }
      else{
        currentNum = 3 * currentNum + 1;
      }
    }
    if(chainLength > max){
      max = chainLength;
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
