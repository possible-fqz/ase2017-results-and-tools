#include <assert.h>
int __BLAST_NONDET;

void main(int flag)
{	
  int x = 0;
  int y = 0;
  int j = 0;
  int i = 0;
  int c = 0;
  int d = 1;
  while(__BLAST_NONDET)
  {
    x++;
    y++;
    i+=x;
    j+=y;
    if(flag) 
    {
      j+=1;
    }
  } 
  if(j>=i)
    x=y;
  else
    x=y+1;

  int w = 1;
  int z = 0;
  while(__BLAST_NONDET){
    while(__BLAST_NONDET){
      if(w%2 == 1) 
        x++;
      if(z%2==0)
        y++;
      }
      z=x+y;
      w=z+1;
  }
  assert(x==y);
}
