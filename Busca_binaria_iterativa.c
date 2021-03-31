#include <stdio.h>

int bi(int V[],int n, int k){
  int left=0, rigth=n-1, middle = 0; //1

  while(left <= rigth){ 
    middle = (left+rigth)/2; //n/2^k

    if(V[middle] == k) //1
      return middle;  //1

    else if(k > V[middle])
      left = middle +1;

    else
      rigth = middle - 1;
  }
  return -1;
}

int main(void) {

	int V[100] = {5 , 6 , 11 , 14 , 15 , 17 , 18 , 23 , 24 , 25 , 26 , 27 , 27 , 28 , 29 , 31 , 31 , 34 , 39 , 40 , 43 , 42 , 45 , 48 , 49 , 53 , 60 , 63 , 65 , 69 , 71 , 72 , 72 , 73 , 74 , 74 , 75 , 80 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 90 , 91 , 92 , 95 , 97};
 
  printf("\n O valor está na posicao %d",bi(V,100,98));

}