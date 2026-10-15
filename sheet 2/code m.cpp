#include <iostream>
using namespace std;
int main()
{
   int a, b;
   cin >> a >> b;
    int count = 0;

    for (int i = a; i <= b; i++)
    {
     int n = i;
      bool lucky = true;
        while (n > 0)
        {
          int digit = n % 10;
           if (digit != 4 && digit != 7)
            {
      lucky = false;
               break;
            }

           n = n / 10;
        }
        if (lucky)
        {
            cout << i << " ";
            count++;
    }
    }
    if (count == 0)
    {
        cout << -1;
    }
    return 0;
}