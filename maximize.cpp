#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
         int x;
        cin >> x;

        int y = x - 1;
        int yy = 0;
        int ans = INT_MIN;

        while (y >= 1)
        {
            int gcd = __gcd(x,y)+y; 

            if(ans<gcd){
                yy = y;
                ans = gcd;
            }        
            y--; 
        }
        cout << yy << endl;
    }
    return 0;
}
