#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> par;
        int currScore = 0;
        int score = 0;
        for (auto &ch : s)
        {
            if (ch == '(')
            {
                par.push('(');
                currScore++;
            }
            else
            {
                
                score += 1 << (currScore-1);
                while (par.size() && par.top() != ',')
                    par.pop();

                par.push(',');
                currScore = 0;
            }
        }
        return score;
    }
};

int main()
{
    Solution* s = new Solution();
    cout << s->scoreOfParentheses("(()(()))");
    // ((,((,
    // () = 1
    // ()() = 2
    // (()) = 2
    // ()(()) = 3 (1+2)
}