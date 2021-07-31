int predmax_4(int a, int b, int c, int d, int max, int pmax){

  if ((a >= b) && (a >= c) && (a >= d)){
    max = a;
  }
  if ((b >= a) && (b >= c) && (b >= d)){
    max = b;
  }
  if ((c >= a) && (c >= b) && (c >= d)){
    max = c;
  }
  if ((d >= a) && (d >= b) && (d >= c)){
    max = d;
  }
  if(max == a){
    if ((b >= c) && (b >= d)){
      pmax=b;
    }
    if ((c >= b) && (c >= d)){
      pmax = c;
    }
    if ((d >= b) && (d >= c)){
      pmax = d;
    }
  }
  if(max == b){
    if ((a >= c) && (a >= d)){
      pmax=a;
    }
    if ((c >= a) && (c >= d)){
      pmax=c;
    }
    if ((d >= a) && (d >= c)){
      pmax=d;
    }
  }
  if(max == c){
    if ((a >= b) && (a >= d)){
      pmax=a;
    }
    if ((b >= a) && (b >= d)){
      pmax=b;
    }
    if ((d >= a) && (d >= b)){
      pmax=d;
    }
  }
  if(max == d){
    if ((a >= b) && (a >= c)){
      pmax=a;
    }
    if ((b >= a) && (b >= d)){
      pmax=b;
    }
    if ((c >= a) && (c >= b)){
      pmax=c;
    }
  }
  return pmax;
}
