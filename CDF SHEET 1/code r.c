//Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its  
//respective message"years", "months" and "days".
//Note: consider the whole year has 365 days and 30 days per month.
#include <stdio.h>
int main() {
    int n, years, months, days;
    scanf("%d", &n);
    years = n / 365;
    n = n % 365;
    months = n / 30;
    days = n % 30;
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days", days);
    return 0;
}

