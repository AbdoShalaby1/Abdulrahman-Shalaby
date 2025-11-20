class Solution
{
public:
    static string decodeString(string s)
    {
        string num = "";
        stack<pair<string, pair<int, int>>> beginEndIndices;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']')
            {
                auto tmp = beginEndIndices.top();
                tmp.second.second = i;
                beginEndIndices.pop();
                string inside = s.substr(tmp.second.first + 1, tmp.second.second - tmp.second.first - 1);
                string repeated = "";
                for (int j = 0; j < stoi(tmp.first); j++)
                {
                    repeated += inside;
                }

                s.replace(s.begin() + tmp.second.first - tmp.first.size(), s.begin() + tmp.second.second + 1, repeated);
                i = tmp.second.first - tmp.first.size() + repeated.size() - 1;
                if (i < -1)
                    i = -1;
            }
            if (isdigit(s[i]))
            {
                num += s[i];
            }
            if (s[i] == '[')
            {
                beginEndIndices.push({num, {i, i}});
                num = "";
            }
        }
        return s;
    }
};