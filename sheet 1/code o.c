//Given a mathematical expression. The expression will be one of the following expressions: A+B
// A−B
//A∗B
//and A/B
//Print the result of the mathematical expression.

#include <stdio.h>

int main() {
    int A, B;
    char S;

    scanf("%d %c %d", &A, &S, &B);

    if (S == '+')
        printf("%d", A + B);
    else if (S == '-')
        printf("%d", A - B);
    else if (S == '*')
        printf("%d", A * B);
    else if (S == '/')
        printf("%d", A / B);

    return 0;
}