#include <assert.h>
int __BLAST_NONDET;

/*
 * Taken from "Counterexample Driven Refinement for Abstract Interpretation" (TACAS'06) by Gulavani
 */

void main(int n) {
  int x= 0;
  int m=0;
  while(x<n) {
     if(__BLAST_NONDET) {
	m = x;
     }
     x= x+1;
  }
  if(n>0) assert(0<=m && m<n);
}
