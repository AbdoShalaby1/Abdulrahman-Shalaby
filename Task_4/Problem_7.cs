public class Solution
{
    public IList<IList<int>> Generate(int numRows)
    {
        numRows++;
        IList<IList<int>> ans = new List<IList<int>>();
        ans.Add(new List<int>() { 1 });
        ans.Add(new List<int>() { 1,1 });
        for (int i = 2; i < numRows; i++)
        {
            List<int> curr = new();
            curr.Add(1);
            for (int j = 2; j < i; j++)
            {
                curr.Add(ans[i-1][j - 2] + ans[i-1][j-1]);
            }
            curr.Add(1);
            ans.Add(curr);
        }
        ans.RemoveAt(1);
        return ans;
        
    }
}