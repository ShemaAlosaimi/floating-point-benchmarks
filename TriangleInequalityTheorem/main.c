#include <assert.h>

int main() {
  _BitInt(100000) a = nondet_int();
  _BitInt(100000) b = nondet_int();
  _BitInt(100000) c = nondet_int();

  __ESBMC_assume(a > 0 && b > 0 && c > 0);

  assert((a + b) > c && (a + c) > b && (b + c) > a); 

  return 0;
}
