#include <stdio.h>
int bublle(int *a, int n)
{
  int* pp;
  int kol=0;
  for(int *p=a; p<=&a[19]; p++){
    for(pp=p+1; pp<=&a[20]; pp++){
      if(*p>*pp){
        int g=*p;
        *p=*pp;
        *pp=g;
        kol++;
    }
   }
  }
  return kol;
}
int main()
{
  int a[20]={2,9,5,4,6,-7,3,8,5,-12,15,48,5,31,15,16,-10,13,51,0};
  int res=bublle(a,20);
  printf("%d\n", res);
  //bublle(a,20);
  for (int *p=a; p<=&a[19]; p++){
    printf("%d ", *p);
  }
  return 0;
}
