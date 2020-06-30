#include <stdio.h>

int n;
int k;
int A[100000];
int i;

unsigned int p(int A[],int n,int k,int x){
  if (x == 0) return 1;
  int a = 0;
  for(i = 0 ; i < n; i++ ){
    a = a + A[i]/x;
  }
  if (k <= a) return 1 ;
  return 0 ;
}


int main(){
  int i, lb, ub;
  lb = 0;
  ub = 1000000000;
  scanf("%d%d", &n, &k);
  if(n > 100000) return 1 ;
  if(n < 1) return 1;
  if(k > 100000) return 1 ;
  if(k < 1) return 1;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    if(A[i] > 1000000000) return 1;
    if(A[i] < 1) return 1;
  }
  while (ub - lb > 1){
    int mid =(lb + ub) / 2 ;
    if(p(A,n,k,mid) == 1) lb = mid ;
    else ub = mid;
  }
  printf("%d",lb);
  
  return 0;
}
