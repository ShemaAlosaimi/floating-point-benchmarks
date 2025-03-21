#include <assert.h>
#include <float.h>
#include <math.h>

int main() {
    double x = nondet_double();
    double y = nondet_double();

    __ESBMC_assume(x > 1e16 && x < 1e17);     // Large magnitude
    __ESBMC_assume(y > 0.0 && y < 1.0);       // Small magnitude

    double sum = x + y;

    
    assert(sum > x);

    return 0;
}
