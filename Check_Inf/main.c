#include <math.h>
#include <assert.h>
#include <float.h>

int main() {
    float x = 1.0f;
    float y = 0.0f;
    float z = x / y;

    // Check for +Inf
    assert(z > FLT_MAX);         // Verification should pass if z is +Inf
    assert(!isnan(z));           // Ensure z is not NaN
    assert(isinf(z));            // This checks explicitly for Inf
    assert(z > 0);               // Check for positive infinity

    float w = -1.0f / y;

    // Check for -Inf
    assert(w < -FLT_MAX);        // Verification should pass if w is -Inf
    assert(!isnan(w));
    assert(isinf(w));
    assert(w < 0);               // Check for negative infinity

    return 0;
}
