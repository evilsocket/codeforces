#include <string.h>
#include <stdio.h>

int main( int argc, char **argv )
{
  char a[101] = {0};

  scanf( "%s", a );
  
  if( strchr( a, 'H' ) || strchr( a, 'Q' ) || strchr( a, '9' ) )
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}