#include <stdio.h>
#include <math.h>

int main(void)
{
    // int -> double
    int i = 165;
    double i_double = i;    // implicite cast

    printf("i: %d\n", i);
    printf("i_double : %12.10f\n", i_double);

    // Mixed expression
    {
        int a = 7;
        int b = 3;
        double x = a/b; // (int)a / (int)b
        printf("x: %12.10f\n", x);
    }
    {
        int a = 7;
        double b = 3.0;
        double x = a/b; // =(double) (int)a / (double)b
        printf("x: %12.10f\n", x);
    }
    {
        int a = 7;
        double b = 3.0;
        int x = (int)a/b; // =(int) (int)a / (double)b
        printf("x: %d\n", x);
    }
    {
        double x = 7/3; // (int)a / (int)b
        printf("x: %f\n", x);
    }
    {
        double x = 7/3.0; // 3 = (int); 3.0 = (double)
        printf("x: %f\n", x);
    }

    // double -> int

    double value = 3.4415;
    
    int value_cast = (int)value;    // Cast operator: (int)
    int value_ceil = (int)ceil(value);
    int value_floor = (int)floor(value);
    int value_round = (int)round(value);    //!!!

    printf("value: %f\n", value);
    printf("cast : %d\n", value_cast);
    printf("ceil : %d\n", value_ceil);
    printf("floor: %d\n", value_floor);
    printf("round: %d\n", value_round);

    return 0;
}
