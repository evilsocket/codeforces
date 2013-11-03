#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <vector>
#include <algorithm>

using namespace std;

#define SKIP_PROCESSED(pos) if( groups[pos] == -1 ) continue

bool compare(int i,int j) { return (i<j); }

int main( int argc, char **argv )
{
  int n, taxi = 0, g, i, j, sum, need, nsum;
  vector<int> groups;
  vector<int>::iterator found;

  scanf( "%d", &n );

  for( i = 0; i < n; i++ ){
    scanf( "%d", &g );
    groups.push_back(g);
  }

  std::sort( groups.begin(), groups.end(), compare );

  for( i = 0; i < n; ++i )
  {    
    SKIP_PROCESSED(i);
    
    taxi++;
    sum = groups[i];
    groups[i] = -1;

    if( sum == 4 ) continue;

    need = 4 - sum;

    if( need == 1 )
    {
      found = std::lower_bound( groups.begin(), groups.end(), need );
      if( found != groups.end() && !( need < *found ) ){
        *found = -1;
      }
    }
    else
    {
      for( j = i + 1; j < n; ++j )
      {
        SKIP_PROCESSED(j);
        
        nsum = sum + groups[j];

        // overflow
        if( nsum > 4 ){
          continue;
        }
        // perfect fit
        else if( nsum == 4 ){
          groups[j] = -1;
          break;
        }
        // search a better fit
        else {
          need = 4 - sum;
          found = std::lower_bound( groups.begin(), groups.end(), need );
          if( found != groups.end() && !( need < *found ) ){
            *found = -1;
            break;
          }
          else {
            sum = nsum;
            groups[j] = -1;
          }
        }
      }
    }
  }

  printf( "%d\n", taxi );

  return 0;
}