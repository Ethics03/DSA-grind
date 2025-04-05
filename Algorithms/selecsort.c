#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;
clock_t start,end;

double cpu_time;

void display(int n,int a[]){
  printf("The sorted array is :");
  for(int i = 0; i < n; i++){
    printf("%d",a[i]);
  }
  printf("\n");
}

void sort(int n,int a[]){
  int min;
  for(int i=0;i<n-1;i++){
    min = i;
    for(int j = i+1;j<n;j++){
      if(a[min]>a[j]){
        min=j;
      }
    }
    //swapping here
    if(min!=i){
      int t = a[min];
      a[min]=a[i];
      a[i]=t;
    }
  }
}

int main(){
    int n;
    
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
  for(int i = 0 ;i<n;i++){
    a[i] = rand()%100;
  }
  start = clock();
  sort(n,a);
  end=clock();
  cpu_time = ((double)end-start)/CLOCKS_PER_SEC;
  display(n,a);
  printf("Time taken %f",cpu_time);
  return 0;
}
