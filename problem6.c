#include <stdio.h>

int main(){
  long sumSquares = 0, sum = 0;
  int i;
  for(i = 1; i < 101; i++){
    sumSquares += (i * i);
    sum += i;
  }
  long ans = (sum * sum) - sumSquares;
  printf("%ld\n",ans);
  return ans;
}
