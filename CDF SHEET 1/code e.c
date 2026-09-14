// given a number R calculate the area of a circle using the following formula:
// Area = π * R2.
// Note: consider π = 3.141592653

#include <stdio.h>
int main() {
    double R;
    scanf("%lf", &R);
    printf("%.9lf", 3.141592653 * R * R);

    return 0;

    
}
