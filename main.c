#include <stdio.h>

#include "adder.h"
#include "subtractor.h"
#include "multiplier.h"
#include "divider.h"

int main()
{
    int a = 100;
    int b = 5;

    int result_add      = add(a, b);
    int result_subtract = subtract(a, b);
    int result_multiply = multiply(a, b);
    int result_divide   = divide(a, b);

    printf("\r%d + %d = %d\n", a, b, result_add);
    printf("\r%d - %d = %d\n", a, b, result_subtract);
    printf("\r%d * %d = %d\n", a, b, result_multiply);
    printf("\r%d / %d = %d\n", a, b, result_divide);

    return 0;
}

// end of file main.c
