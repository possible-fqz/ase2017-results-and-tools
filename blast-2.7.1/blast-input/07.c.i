# 1 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/07.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/07.c"
# 1 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h" 1
# 36 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h"
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 37 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h" 2
# 65 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h"



void __blast_assert() __attribute__ ((__noreturn__)) {
ERROR: goto ERROR;
}



void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     
# 76 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h" 3 4
    __attribute__ ((__nothrow__ , __leaf__)) 
# 76 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h"
            __attribute__ ((__noreturn__)) {
   __blast_assert();
}


void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     
# 84 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h" 3 4
    __attribute__ ((__nothrow__ , __leaf__)) 
# 84 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h"
            __attribute__ ((__noreturn__)) {
   __blast_assert();
}




void __assert (const char *__assertion, const char *__file, int __line)
     
# 92 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h" 3 4
    __attribute__ ((__nothrow__ , __leaf__)) 
# 92 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/assert.h"
            __attribute__ ((__noreturn__)) {
 __blast_assert();
}




# 2 "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/07.c" 2





void main() {
  int i, n, a, b;
  int __BLAST_NONDET;

  if (!(n >= 0)) {
   return;
  }

  i = 0; a = 0; b = 0;
  while( i < n ) {
    if(__BLAST_NONDET) {
      a = a+1;
      b = b+2;
    } else {
      a = a+2;
      b = b+1;
    }
    i = i+1;
  }
  ((void) ((a+b == 3*n) ? 0 : (__assert_fail ("a+b == 3*n", "/home/spencerxiao/Experiments/tacas17/blast-2.7.1/oopsla13-benchmarks-blast/07.c", 26, __PRETTY_FUNCTION__), 0)));

}
