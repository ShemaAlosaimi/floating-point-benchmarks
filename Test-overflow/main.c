#include <math.h>
#include <assert.h>
#include <float.h>

int main() {
    float x = 1.0f;
    float y = 0.0f;
    float z = x / y;  // IEEE-754: z = +Inf

    // This assertion is false under IEEE-754 and should fail
    assert(z <= FLT_MAX);  // FLT_MAX is the largest finite float

    return 0;
}
