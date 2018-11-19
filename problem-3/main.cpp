#include "main.h"

int multiply(int x[], int y[], int n)
{
    int result = 0;

    for (int i = 0; i < n; i++) {
        result += x[i] * y[i];
    }

    return result;
}
