#include <assert.h>
#include <math.h>
#include <float.h>

int main() {
    _BitInt(64) a = nondet_int();
    _BitInt(64) b = nondet_int();
    _BitInt(64) c = nondet_int();

    __ESBMC_assume(a > 0 && b > 0 && c > 0);

    _BitInt(64) expr1 = (a * b) / c;
    _BitInt(64) expr2 = a * (b / c);

    assert(expr1 == expr2);
}
