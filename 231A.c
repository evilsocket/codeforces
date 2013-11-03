#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  int n, i, a, b, c, tot = 0;

  scanf( "%d", &n );

  for( i = 0; i < n; ++i ){
    scanf( "%d %d %d", &a, &b, &c );

    if( (a+b+c) >= 2 )
      ++tot;
  }

  printf( "%d\n", tot );

  return 0;
}