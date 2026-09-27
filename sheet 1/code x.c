//Given the boundaries of 2 intervals. Print the boundaries of their intersection.
//Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.
#include <stdio.h>
int main() {
    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
 
    if (l1 > r2 || l2 > r1)
        printf("-1");
    else {
        if (l1 > l2)
            printf("%d ", l1);
        else
            printf("%d ", l2);
 
        if (r1 < r2)
            printf("%d", r1);
        else
            printf("%d", r2);
    }
 
    return 0;
}


