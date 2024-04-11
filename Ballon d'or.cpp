#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,two=0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
          if(num==2)
              two++;
        }
        if(two%8==0)
        { 
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
