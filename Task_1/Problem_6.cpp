#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int x;
    cin >> x;
    int ctr = 0;
    for (int i = 2; i*i <= x; i++)
    {
        if (x % i == 0 && i*i != x)
        {
            ctr+=2;
        }
        if (i*i == x)
        {
            ctr++;
        }
    }
    if (ctr % 2 == 0) cout << "NO";
    else cout << "YES";

}