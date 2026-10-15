#include <iostream>
using namespace std;
int main() {
    int x, reverse;
    cin >> x;
    reverse = x;
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    cout << rev << endl;

    if (reverse == rev)
      cout << "YES";
    else
    cout << "NO";

    return 0;
}