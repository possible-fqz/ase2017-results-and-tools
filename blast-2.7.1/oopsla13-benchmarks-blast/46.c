#include "assert.h"

void main()
{
  int w = 1;
  int z = 0;
  int x= 0;
  int y=0;
  int __BLAST_NONDET;
	  
  while(__BLAST_NONDET){
    if(w%2 == 1) {x++; w++;};
    if(z%2==0) {y++; z++;};
  }

  assert(x<=1);
}

