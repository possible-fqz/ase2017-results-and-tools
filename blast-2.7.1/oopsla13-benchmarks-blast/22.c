#include "assert.h"

void main()
{
  int x = 0;
  int y = 0;
  int z = 0;
  int k = 0;
  int __BLAST_NONDET;
  while(__BLAST_NONDET)
  {
     if(k%3 == 0)
       x++;
     y++;
     z++;
     k = x+y+z;
  }

  assert(x==y);
  assert(y==z);
 
}

