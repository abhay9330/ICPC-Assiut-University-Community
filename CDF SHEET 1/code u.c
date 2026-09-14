//Given a number N determine whether n 
// is float number or integer number.
 //if n is float number then print "float" followed by the integer part followed by decimal part separated by space.
//if n is integer number then print "int" followed by the integer part separated by space.
#include <stdio.h>

int main() {
    float N;
    scanf("%f", &N);

    int x = (int)N;
    int y = (N - x) * 1000;

    if (y == 0)
        printf("int %d", x);
    else
        printf("float %d %d", x, y);

    return 0;
}
