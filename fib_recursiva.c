#include <stdio.h>

float fib(int n) {
  if ( n <=1 ) //1
    return n;
  else
    return fib(n-1)+ fib(n-2); //T(n-1)+(Tn-2) 
  }

int main() {
  int num;
  printf("\nEntre com um valor para n: "); 
  scanf("%d", &num); 
  printf("\nO %d termo de Fibonacci é %f", num , fib(num));
  return 0;
  }