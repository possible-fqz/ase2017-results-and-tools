#include "assert.h"

/*
 * IC3 motivating example
 */ 

void main()
{
 int x=1; 
 int y=1;
 int __BLAST_NONDET;
 while(__BLAST_NONDET) {
   int t1 = x;
   int t2 = y;
   x = t1 + t2;
   y = t1 + t2;
 }
 assert(y>=1);
}

