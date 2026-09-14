//Given a number X. Determine in which of the following intervals the number X belongs to:
//[0,25], (25,50], (50,75], (75,100]
//if X belongs to any of the above intervals print "Interval " followed by the interval.
//if X does not belong to any of the above intervals print "Out of Intervals".
//The symbol '(' represents greater than.
//The symbol ')' represents smaller than.
//The symbol '[' represents greater than or equal.
//The symbol ']' represents smaller than or equal.
#include <stdio.h>
int main() {
    float x;
    scanf("%f", &x);
    if (x >= 0 && x <= 25)
        printf("Interval [0,25]");
    else if (x > 25 && x <= 50)
        printf("Interval (25,50]");
    else if (x > 50 && x <= 75)
        printf("Interval (50,75]");
    else if (x > 75 && x <= 100)
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");
    return 0;
}
