#include <iostream>
using namespace std;

int _3nP1(int x, int ctr = 1)
{
    if (x == 1) return ctr;
    if (x % 2 == 0)
    {
        return _3nP1(x/2, ctr+1);
    }
    else
    {
        return _3nP1(3*x + 1, ctr+1);
    }
}

int main()
{
    int x;
    cin >> x;
    cout << _3nP1(x);
}