#include<stdio.h>
#include<stdlib.h> 
int f (int n) {
  int sum=0;
  if (n<2) {
    return 0;
    }
  for (int i=1; i<=n; i=i+1) {
    sum = sum + i;
    }
  sum = sum + f(2*n/3);
  return sum;
  }
int main()
  {
  	f(1000);
  	system("pause");
  	return 0;
  }
    
