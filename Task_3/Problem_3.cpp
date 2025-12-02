class Solution
{
public:
    queue<int> reverseFirstK(queue<int> q, int k)
    {
        stack<int> tmp;
        queue<int> ans;
        if (k <= q.size())
        {
            for (int i = 0; i < k; i++)
            {
                if (!q.empty())
                {
                    tmp.push(q.front());
                    q.pop();
                }
            }
            while (!tmp.empty())
            {
                ans.push(tmp.top());
                tmp.pop();
            }
            while (!q.empty())
            {
                ans.push(q.front());
                q.pop();
            }
            return ans;
        }
        return q;
    }
};