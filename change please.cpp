#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b = 100 - n;
        if(b%10==0){
            cout << b << endl;
        }
        else{
            b /= 10;
            cout << b * 10 << endl;
        }
    }
}
