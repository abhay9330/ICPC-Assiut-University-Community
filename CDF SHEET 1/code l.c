// Given two person names.

//Each person has {"the first name" + "the second name"}

//Determine whether they are brothers or not.
#include <stdio.h>
#include <string.h>
int main() {
    char a[1000], b[1000], c[1000], d[1000];
    scanf("%s %s", a, b);
    scanf("%s %s", c, d);
 
    if (strcmp(b, d) == 0)
      printf("ARE Brothers");
    else
      printf("NOT");
 
    
}