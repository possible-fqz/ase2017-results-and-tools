extern int __VERIFIER_nondet_int();

int main(int k)
{
  int z = k;
  int x = 0;
  int y = 0;

	while(__VERIFIER_nondet_int())
  {
    int c = 0;
    while(__VERIFIER_nondet_int())
    {
      if(z==k+y-c)
      {
        x++;
        y++;
        c++;
      }else
      {
        x++;
        y--;
        c++;
      }
    }
    while(__VERIFIER_nondet_int())
    {
      x--;
      y--;
    }
    z=k+y;
  }
  if(!(x==y)) {
		ERROR: goto ERROR;
	}
}
