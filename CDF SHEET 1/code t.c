//Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence 
// as they were read
#include <stdio.h>

int main() {
    int A, B, C, temp;

    scanf("%d %d %d", &A, &B, &C);

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }

    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("%d\n%d\n%d\n\n", A, B, C);

    return 0;
}