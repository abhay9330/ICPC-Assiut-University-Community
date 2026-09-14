//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase 
//otherwise print the letter after converting it from uppercase letter to lowercase.


#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z')
        x = x - 32;
    else
        x = x + 32;

    printf("%c", x);

    return 0;
}