#include "main.h"

int binarySearch(int array[], int n, int x)
{
    int start = 0, end = n - 1, mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (array[mid] == x) return mid;
        else if (array[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}
