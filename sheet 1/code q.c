//Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.
//Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
//Print "Origem" If the point is at the origin.
//Print "Eixo X" If the point is over X axis.
//Print "Eixo Y" if the point is over Y axis.
#include <stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
        printf("Origem");
    else if (x == 0)
        printf("Eixo Y");
    else if (y == 0)
        printf("Eixo X");
    else if (x > 0 && y > 0)
        printf("Q1");
    else if (x < 0 && y > 0)
        printf("Q2");
    else if (x < 0 && y < 0)
        printf("Q3");
    else
        printf("Q4");

    return 0;
}


