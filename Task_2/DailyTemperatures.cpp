#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // [73,74,75,71,69,72,76,73]
        // [1,1,4,2,1,1,0,0]

        stack <pair<int,int>> temp;
        vector<int> ans(temperatures.size());
        temp.push({temperatures[0],0});
        for (int i = 1; i < temperatures.size(); i++)
        {
            while (!temp.empty() && temperatures[i] > temp.top().first)
            {
                auto topTemp = temp.top().first;
                auto topIdx = temp.top().second;
                ans[topIdx] = i - topIdx;
                temp.pop();
            }
            temp.push({temperatures[i],i});
        }

        return ans;
    }
};

int main()
{
    Solution *s = new Solution();
    vector<int> t = {73,74,75,71,69,72,76,73};
    auto x = s->dailyTemperatures(t);
    for (auto val : x) cout << val << " ";
}