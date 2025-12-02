class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> people;
        int time = 0;
        bool kFinished = false;
        for (int i = 0; i < tickets.size(); i++)
        {
            if (i != k)
                people.push({tickets[i],false});
            else
                people.push({tickets[i],true});
        }
        while (!people.empty())
        {
            auto f = people.front();
            time++;
            people.pop();
            if (f.first-1 != 0)
                people.push({f.first-1,f.second});
            else if (f.second == true)
            {
                break;
            }
           
        }
        return time;

    }
};
