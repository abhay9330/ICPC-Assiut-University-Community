//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

//Note:

//Digits in ASCII '0' = 48,'1' = 49 ....etc
//Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
//Small letters in ASCII 'a' = 97,'b' = 98 ....etc

#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x);

    if (x >= '0' && x <= '9')
        printf("IS DIGIT");
    else if (x >= 'A' && x <= 'Z')
        printf("ALPHA\nIS CAPITAL");
    else
        printf("ALPHA\nIS SMALL");


}