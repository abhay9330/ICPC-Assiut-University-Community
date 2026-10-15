#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = min(a, b) + 1; i < max(a, b); i++) {
        if (i % 2 != 0) {
            sum = sum + i;
         }
        }
        cout << sum << endl;
    }
    return 0;
}
