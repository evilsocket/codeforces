#include <stdio.h>
#include <math.h>

int main( int argc, char **argv )
{
  char word[100] = {0},
       out[200] = {0};
  int len, i, j;
  char c;

  scanf( "%s", word );

  len = strlen(word);

  for( i = 0; i < len; i++ ){
    word[i] = tolower( word[i] );
  }

  for( i = 0, j = 0; i < len; i++ ){
    c = word[i];
    if( !strchr( "aeiouy", c ) ){
      sprintf( &out[j], ".%c", c );
      j += 2;
    }
  }

  printf( "%s\n", out );

  return 0;
}