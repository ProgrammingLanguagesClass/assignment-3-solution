#include "main.h"

int addOddNumbers(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    return sum;
}