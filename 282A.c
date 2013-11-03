#include <stdio.h>
#include <string.h>

int main( int argc, char **argv )
{
  int n, x = 0;
  char exp[0xFF] = {0};

  scanf( "%d", &n );

  while( n-- )
  {
    scanf( "%s", exp );
    if( strstr( exp, "--" ) )
      --x;
    else if( strstr( exp, "++" ) )
      ++x;
  }

  printf( "%d\n", x );

  return 0;
}