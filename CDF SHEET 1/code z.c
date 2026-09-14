//given 4 no a b c d if a power b greater  than c power d print yes if not then no 


#include <stdio.h>
#include <math.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    if (B * log(A) > D * log(C))
    printf("YES");
    else
    printf("NO");
    return 0;
}