#include <iostream>
#include "main.h"

using namespace std;

float averageGrade(int grades[], int n)
{
    float average = 0;

    for (int i = 0; i < n; i++) {
        average += grades[i];
    }
    average /= n;

    return average;
}