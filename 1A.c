#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  int n, m, a, x, y, totx, toty;

  scanf( "%d %d %d", &n, &m, &a );

  long long s = ceil( n / (double)a ) * ceil( m / (double)a );

  printf( "%I64d\n", s );

  return 0;
}