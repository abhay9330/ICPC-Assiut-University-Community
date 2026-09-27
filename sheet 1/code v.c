//Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.
// comparison is as follows: A < B, A > B, A = B.
//Where A, B are two integer numbers and S refers to the sign between them.
#include <stdio.h>

int main() {
    int A, B;
    char S;

    scanf("%d %c %d", &A, &S, &B);

    if (S == '<' && A < B)
        printf("Right");
    else if (S == '>' && A > B)
        printf("Right");
    else if (S == '=' && A == B)
        printf("Right");
    else
        printf("Wrong");

    
}
