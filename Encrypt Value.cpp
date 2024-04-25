#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum=0,mal=1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n;i++){
            sum += arr[i];
            mal *= arr[i];
        }
        if(sum>mal){
            cout << sum % 1000000007 << endl;
        }
        else{
            cout << mal % 1000000007 << endl;
        }
    }
}
