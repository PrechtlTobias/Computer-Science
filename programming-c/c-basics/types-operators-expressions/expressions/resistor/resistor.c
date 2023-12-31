#include <stdio.h>
#include <math.h>
#include <assert.h>

const double ERROR = 1E-3;

int main(void)
{
    double r1 = 100.0;
    double r2 = 220.0;
    double r3 = 330.0;

    double r_ges = r1 + r2*r3/(r2+r3);

    printf("Rges = %5.2f Ohm\n", r_ges);
    assert(fabs(232.0 - r_ges) <= ERROR);

    return 0;
}

