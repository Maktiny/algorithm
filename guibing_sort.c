#include<stdio.h>
#include<stdlib.h>

void merge(int a[], int start, int end){
  int i = start, mid = (start + end) / 2, k = 0;
  int  j = mid;
  
  int* b = (int *) malloc((end - start + 1)*sizeof(int));

  while(i <= mid && j <= end){
    if(a[i] <= a[j]){
      b[k++] = a[i++];
    }
    else{
      b[k++] = a[j++];
    }
  }

  while(i <= mid){
    b[k++] = a[i++];
  }

  while(j <= end){
    b[k++] = a[j++];
  }

  i = 0;
  for(; i < k; i++){
    a[start + i] = b[i];
  }

  free(b);
}

void guibing_sort(int a[], int start, int end){
  if(a == NULL || start >= end)
      return ;
  int mid = (start + end) / 2;

  guibing_sort(a, start, mid);
  guibing_sort(a, mid + 1, end);
  merge(a,  start,  end);
}

int main(){
  int a[10] = {11,32,22,41,54,64,77,2,38,99};
  guibing_sort(a, 0, 9);

  int i = 0;
  for(; i < 10; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
}
