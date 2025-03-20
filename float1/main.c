#include <assert.h>
#include <math.h>
#include <float.h>

int main() {
    _BitInt(100000) a = nondet_int();
    _BitInt(100000) b = nondet_int();
    _BitInt(100000) c = nondet_int();

    __ESBMC_assume(a > 0 && b > 0 && c > 0);

    _BitInt(100000) expr1 = (a * b) / c;
    _BitInt(100000) expr2 = a * (b / c);

    assert(expr1 == expr2);
}
