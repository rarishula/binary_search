#include <stdio.h>

int n;
int k;
int A[100000];

unsigned int binary_search(int A[],int x,int n){
  int lb = -1;
  int ub = n;
    while (ub - lb > 1){
      int mid = (lb + ub)/2;
      if(A[mid] >= x ) ub = mid;
      else lb = mid;
    }
    return ub;
  }

int main(){
  int i, lb, ub,a;
  scanf("%d%d", &n, &k);
  if(n > 100000) return 1 ;
  if(n < 1) return 1;
  if(k > 1000000000) return 1 ;
  if(k < 1) return 1;
  lb = -1;
  ub = n;
  
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    if(A[i] > 1000000000) return 1;
    if(A[i] < 1) return 1;
    if(i>0){
      if(A[i] < A[i-1]) return 1;
    }
  }
    a = binary_search(A,k,n);
  printf("%d", a );
  return 0;
}
