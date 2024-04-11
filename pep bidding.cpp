#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int aa = 0, ad = 0;
        int pa = 0, pd = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            int temp;
            cin >> temp;
            aa += temp;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            ad += temp;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            pa += temp;
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            pd += temp;
        }
        if(pa>aa && pd>ad){
            cout << "P" << endl;
        }
        else if(pa<aa && pd<ad){
            cout << "A" << endl;
        }
        else{
            cout << "DRAW" << endl;
        }
    }
}
