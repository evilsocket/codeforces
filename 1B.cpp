#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

void to_aa(int n)
{
  string s = "";
  int mod;

  while(n){
    mod = n % 26;

    if( mod == 0){
      s += 'Z';
      n /= 26;
      --n;
    }
    else {
      s += (char)( mod + 'A' - 1 );
      n /= 26;
    }
  }

  reverse(s.begin(), s.end());

  cout << s;
}

int to_nn(const char *s)
{
  int n = 0, i, len = strlen(s);

  for( i = 0; i < len; ++i )
  {
    n = ( n * 26 + ( s[i] - 'A' + 1 ) );
  }

  return n;
}

void r2x( char *s )
{
  int r, c;

  sscanf( s,"R%dC%d", &r, &c );

  to_aa( c );
  cout << r << endl;
}

void x2r( char *ps )
{
  string s(ps), aa, nn;
  int i = 0, len = strlen(ps);

  for( i = 0; i < len; ++i ){
    if( isdigit(ps[i]) )
      break; 
  }

  nn = s.substr( i, len - i );
  aa = s.substr( 0, i );

  printf( "R%sC%d\n", nn.c_str(), to_nn( aa.c_str() ) );
}

int main( int argc, char **argv )
{
  int n;
  char s[101] = {0};

  scanf( "%d", &n );

  while( n-- )
  {
    scanf( "%s", s );

    // RXCY -> XXNN
    if( s[0] == 'R' && isdigit( s[1] ) ){
      r2x( s );
    }
    // XXNN -> RXCY
    else {
      x2r( s );
    }
  }

  return 0;
}