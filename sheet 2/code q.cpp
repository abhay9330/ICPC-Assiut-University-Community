#include <iostream>
using namespace std;
int main()
{
int T, N;
cin >> T;
for(int i = 0; i < T; i++)
    {
        cin >> N;
        if(N == 0)
        {
            cout << 0 << endl;
        }
        else{
        
              while(N > 0)
            {
        cout << N % 10;
         N = N / 10;
        if(N > 0){
                
         cout << " ";
        }} 
        cout << endl;
        }}}
