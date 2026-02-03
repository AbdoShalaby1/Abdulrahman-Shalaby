public class Solution
{
    public void SetZeroes(int[][] matrix)
    {
        HashSet<int> x = new();
        HashSet<int> y = new();
        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0; j < matrix[i].Length; j++)
            {
                if (matrix[i][j] == 0)
                {
                    x.Add(i);
                    y.Add(j);
                }
            }
        }

        for (int i = 0; i < matrix.Length; i++)
        {
            for (int j = 0; j < matrix[i].Length; j++)
            {
                if (x.Contains(i) || y.Contains(j))
                {
                    matrix[i][j] = 0;
                }
                
            }
        }
    }
}