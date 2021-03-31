#include <stdio.h>
#include <math.h>

float fm(n){
  float f2=0,f=0;
 if((n == 0) || (n == 1))
    return n; 
  else

  //  f1 = pow((1+sqrt(5))/2,n);  
    f2 = (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n));
    
    f = 1/sqrt(5)*(f2);

  return f;
}

int main(void) {
int n;
  printf("\nEntre com um valor para n: "); 
  scanf("%d", &n); 
  printf("\nO %d termo de Fibonacci é %f", n, fm(n));
  return 0;
}