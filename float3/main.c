#include <assert.h>
#include <math.h>
#include <float.h>

int main() {
    double a = nondet_double();
    double b = nondet_double();

    __ESBMC_assume(a > 0.0 && b > 0.0);
    __ESBMC_assume(a > DBL_MIN && b < DBL_MIN); 

    double result = a + b;

    assert(result != a); 

    return 0;
}
