//The following lines show some C data types, their format specifiers and their most common bit widths
#include <stdio.h>

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);

    return 0;
}