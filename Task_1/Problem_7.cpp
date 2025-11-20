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