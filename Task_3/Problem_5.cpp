class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        queue<int> sandwichesStack;
        queue<int> studentsQueue;
        int zeroesStudentCount = 0;
        int zeroesSandwichCount = 0;
        for (auto s : students)
        {
            studentsQueue.push(s);
            if (s == 0) zeroesStudentCount++;
        }
        for (auto s : sandwiches)
        {
            sandwichesStack.push(s);
            if (s == 0) zeroesSandwichCount++;
        }

        while (!sandwichesStack.empty() && !studentsQueue.empty())
        {
            if (studentsQueue.front() == sandwichesStack.front())
            {
                if (studentsQueue.front() == 0) zeroesStudentCount--;
                if (sandwichesStack.front() == 0) zeroesSandwichCount--;
                studentsQueue.pop();
                sandwichesStack.pop();
                
            }
            else
            {
                int curr = studentsQueue.front();
                studentsQueue.pop();
                studentsQueue.push(curr);
            }
            if ((sandwichesStack.front() == 0 && zeroesStudentCount == 0) || 
                (sandwichesStack.front() == 1 && studentsQueue.size() - zeroesStudentCount == 0))
             {
                return studentsQueue.size();
             }
        }

        return 0;
    }
};