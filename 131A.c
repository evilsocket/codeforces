#include <stdio.h>
#include <string.h>

int main( int argc, char **argv )
{
  char s[101] = {0}, out[101] = {0};
  int i, len, capson = 1;

  scanf( "%s", s );

  len = strlen(s);
  for( i = 1; i < len; ++i ){
    if( islower(s[i]) ){
      capson = 0;
      break;
    } 
  }

  if( capson ){
    for( i = 0; i < len; ++i ){
      out[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
    }
  }
  else
    strcpy( out, s );

  printf( "%s\n", out );

  return 0;
}