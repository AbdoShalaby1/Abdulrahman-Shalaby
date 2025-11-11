#include <iostream>

using namespace std;

class Solution {
public:
    static char kthCharacter(int k) {
        string x = "a";
        string newX = "";
        while (x.size() < k)
        {
            for (auto ch : x)
            {
                newX.push_back(ch+1);
            }
            x.append(newX);
            newX = "";
        }
        return x[k-1];
    }
};

int main()
{
    cout << Solution::kthCharacter(10);
}