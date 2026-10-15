#include <iostream>
using namespace std;
int main() {
 int n;
 int first=0,second = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
       cout << first << " ";
       int third = first + second;
       first = second;
        second = third;
    }
    return 0;
}