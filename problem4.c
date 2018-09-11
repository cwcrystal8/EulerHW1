#include <stdio.h>

int numDigits(int number){
  int ans = 0;
  while(number > 0){
    ans++;
    number /= 10;
  }
  return ans;
}

int power(int base, int exponent){
  int ans = 1;
  while(exponent > 0){
    ans *= base;
    exponent--;
  }
  return ans;
}

int isPalin(int number){
  int num = numDigits(number);
  int i;
  for(i = 0; i < num / 2; i++){
    int front = (number / power(10, num - i - 1)) % 10, back = (number / power(10, i)) % 10;
    //printf("front: %d, back: %d\n", front, back);
    if(front != back){
      return 0;
    }
  }
  return 1;
}

int main(){
  int max = 0;
  int num, i;
  for(num = 100; num < 1000; num++){
    for(i = 100; i < 1000; i++){
      int product = i * num;
      if(product > max && isPalin(product)){
        max = product;
      }
    }
  }
  printf("%d\n",max);
  return max;
}
