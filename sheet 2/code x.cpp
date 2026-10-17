
#include <iostream>
using namespace std;
int main() {
int T;
cin >> T;
while (T--) {
        int N;
        cin >> N;
        int ones = 0;
        while (N > 0) {
         if (N % 2 == 1) {
                ones++;
            }
            N = N / 2;
        }
        int ans = 0;
        for (int i = 0; i < ones; i++) {
            ans = ans * 2 + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
