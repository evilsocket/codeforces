#include <stdio.h>
#include <math.h>

int gcd( int a, int b )
{
  int c;
  while( a ){
     c = a; 
     a = b % a;
     b = c;
  }

  return b;
}

int main( int argc, char **argv )
{
  int nums[2], n, turn = 0, take;

  scanf( "%d %d %d", &nums[0], &nums[1], &n );

  while(1)
  {
    take = gcd( nums[turn], n );

    if( n >= take ){
      n -= take;
    }
    else {
      break;
    }

    turn = !turn;
  }

  printf( "%d\n", turn == 0 );

  return 0;
}