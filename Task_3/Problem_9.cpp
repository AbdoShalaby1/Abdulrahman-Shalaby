class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> q;
        bool *fq = new bool[nums.size()]();
        vector<int> ans;
        for (int i = 0; i < k && i < nums.size(); i++)
        {
            q.push({nums[i],i});
            fq[i] = true;
        }
        ans.push_back(q.top().first);
        for (int i = k; i < nums.size(); i++)
        {
            while (q.size() && q.top().second <= i-k) q.pop();
            if (!fq[i])
            {
                q.push({nums[i],i});
                fq[i] = true;
            }
            ans.push_back(q.top().first);
        }
        return ans;
    }
};