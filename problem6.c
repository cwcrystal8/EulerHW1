#include <stdio.h>

int main(){
  long sum_squares = 0, sum = 0;
  int i;
  for(i = 1; i < 101; i++){
    sum_squares += (i * i);
    sum += i;
  }
  long ans = (sum * sum) - sum_squares;
  printf("%ld\n",ans);
  return ans;
}
