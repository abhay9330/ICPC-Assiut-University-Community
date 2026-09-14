//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if ((x / 1000) % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}

