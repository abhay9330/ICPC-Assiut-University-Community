#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long long count = 0;
    for (int a = 0; a <= n; a++)
          {
      for (int b = 0; b <= n; b++)
       {
        int c = m - a - b;
            if (c >= 0 && c <= n)
            {
                count++;
             }}}

    cout << count << endl;

    }