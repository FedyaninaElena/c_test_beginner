#include <stdio.h>
int selection(int *a, int n)
{
  int p=0;
  for(int i=0; i<n-1; i++){
    int min=i;
    for(int j=i+1; j<n; j++){
      if(a[j]<a[min]){
        min=j;
      }
    }
    int m=a[i];
    a[i]=a[min];
    a[min]=m;
    p++;
  }
  return p;
}
int main()
{
  int a[20]={2,9,5,4,6,-7,3,8,5,-12,15,48,5,31,15,16,-10,13,51,0};
  int res=selection(a,20);
  printf("%d\n", res);
  //selection(a,20);
  for (int i=0; i<20; i++){
    printf("%d ", a[i]);
  }
  return 0;
}
