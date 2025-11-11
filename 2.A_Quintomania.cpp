#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n;
        cin >> x;
        int prv = x;
        n--;
        bool valid = 1;
        while (n--)
        {
            cin >> x;
            if (abs(x-prv) != 5 && abs(x-prv) != 7)
            {
                valid = 0;
            }
            prv = x;
        }

        if (!valid) cout << "NO\n";
        else cout << "YES\n";
        
    }
    
}