#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(8);
    s.push(5);
    s.push(1);

    // cout << s.top();
    s.pop();
    cout << s.top();
}