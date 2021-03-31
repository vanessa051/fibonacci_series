#include <stdio.h>
//ALGORITMO FUNÇÃO FIBONACCI UTILIZANDO FÓMULA ITERATIVA
float fi(n){
  float k, k1, k2, i; //1
  if((n == 0) || (n == 1)){
    return n; 
  }else{
    k1 = 0, k2 = 1;  
  for (i = 1; i <= n-1; i++){ //n-2
    k = k1 + k2;
    k1 = k2;
    k2 = k;
  }
  }
  return k;     
}

int main(void) {
  int num;
  printf("\nEntre com um valor para n: "); 
  scanf("%d", &num); 
  printf("\nO %d termo de Fibonacci é %f", num , fi(num));
  return 0;
}