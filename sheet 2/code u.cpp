
#include <iostream>
using namespace std;
int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        int num = i;
        int digitSum = 0;

        while (num > 0) {
            digitSum += num % 10;
            num = num / 10;
        }
        if (digitSum >= A && digitSum <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
