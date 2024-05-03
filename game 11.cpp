#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        
        long long int sum = 0;
        cin >> n >> m;
        int bat[n];
        int ball[m];
        vector<int> v;
        for (int i = 0; i < n;i++){
            cin >> bat[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ball[i];
        }
        if(n<4 || m<4){
            cout << -1 << endl;
        }
        else if((n+m)<11){
            cout << -1 << endl;
        }
        else{
            sort(bat, bat + n, greater<int>());
            sort(ball, ball + m, greater<int>());
            for (int i = 0; i < 4; i++)
            {
                sum += bat[i];
                sum += ball[i];
        }
        for (int i = 4; i < n;i++){
            v.push_back(bat[i]);
        }
        for (int i = 4; i < m; i++)
        {
            v.push_back(ball[i]);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < 3;i++){
            sum += v[i];
        }
            cout << sum << endl;
        }
}
    
}
