#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int sum = 0;
    int evenSM = 0;
    int oddSM = 0;
    int x,y;
    cin >> x >> y;
    for (int i = min(x,y); i <= max(y,x); i++)
    {
        sum += i;
        if (i % 2 == 0) evenSM += i;
        else oddSM += i;
    }
    cout << sum << '\n' << evenSM << '\n' << oddSM << '\n';
}