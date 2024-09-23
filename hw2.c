#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double km, miles;

    printf("Please enter kilometers: ");
    scanf("%lf", &km);
    
    
    const double milekm = 1.609;

    miles = km / milekm;

  
    printf("%.1f km is equal to %.1f miles.", km, miles);

    return 0;
}