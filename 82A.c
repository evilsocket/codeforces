#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  char *names[5] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

  int n, current = 5; 

  scanf( "%d", &n );

  while( n > current )
  {
    n -= current;
    current <<= 1;
  }

  printf("%s\n", names[ ( n - 1 ) / ( current / 5 ) ]);

  return 0;
}