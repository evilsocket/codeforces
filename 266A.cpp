#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int main( int argc, char **argv )
{
  int n, i, last;
  string stones;

  cin >> n;
  cin >> stones;

again:
    
  last = stones.size() - 1;
  for( i = 0; i < last; ++i )
  {
    if( stones[i] == stones[i + 1] ){
      stones.erase(stones.begin() + i);
      goto again;
    }
  }

  printf( "%d\n", (int)(n - stones.size()) );

  return 0;
}