#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stdDev;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;
    stdDev = sqrt(variance);

    return stdDev;
}

int main() {
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    double stdDev = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3lf\n", stdDev);

    return 0;
}
