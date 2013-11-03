#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  int n, i, in, out, current = 0, max = 0;

  scanf( "%d", &n );

  for( i = 0; i < n; ++i ){
    scanf( "%d %d", &out, &in );

    current = current - out + in;
    if( current > max )
      max = current;
  }

  printf( "%d\n", max );

  return 0;
}