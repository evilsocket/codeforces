#include <string.h>
#include <stdio.h>

char* strtolower(char* s) {
  char* p = s;
  while (*p != '\0') {
    *p = tolower(*p);
    p++;
  }

  return s;
}

int main( int argc, char **argv )
{
  char a[101] = {0}, b[101] = {0};

  scanf( "%s", a );
  scanf( "%s", b );

  int c = strcmp( strtolower(a), strtolower(b) );

  printf( "%d\n", c < 0 ? -1 : c > 0 ? 1 : 0 );

  return 0;
}