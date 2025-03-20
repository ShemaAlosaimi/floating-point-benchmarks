#include <assert.h>
#include <float.h>
#include <math.h>

int main() {
    double a = DBL_MAX / 2.0;
    double b = DBL_MAX / 2.0;

    double result = a + b;

    
    assert(!isinf(result));

    return 0;
}
