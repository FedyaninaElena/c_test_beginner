#include <stdio.h>
#include <math.h>

float f_003_004 (int side, int radius)
{
  if (side <= 0 || radius <= 0)
  {
    return -1;
  }
  float s_1 = side * side;
  float s_2 = M_PI * radius * radius;

  if (s_1 < s_2)
  {
    return (s_1/10000);
  } else
  {
    return (s_2/10000);
  }
}
