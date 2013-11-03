#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  int n, i, j;

  scanf( "%d", &n );

  for( i = 2; i <= 100; i += 2 ){
    for( j = 2; j <= 100; j += 2 ){
      if( i + j == n ){
        printf( "YES\n" );
        return 0;
      }
    }
  }

  printf( "NO\n" );

  return 0;
}