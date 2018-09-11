#include <stdio.h>

int gcd(int a, int b){
  int i;
  if(b < a){
    return gcd(b,a);
  }
  while(b % a != 0){
    int temp = b;
    b = a;
    a = temp % a;
  }
  return a;
}

int main(){
  long ans = 1;
  int i;
  for (i = 1; i < 21; i++) {
    int divisor = gcd(ans, i);
    ans = (ans * i) / divisor;
  }

  printf("%ld\n",ans);
  return ans;
}

/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
