int max_4(int a, int b, int c, int d, int n, int m){

if (a>b){
  n = a;
}
else{
  n = b;
}
if (c>d){
  m = c;
}
else{
  m = d;
}
if (n>m){
  return n;
}
else{
  return m;
}
}
