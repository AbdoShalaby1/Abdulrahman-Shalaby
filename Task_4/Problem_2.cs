class Solution {
    public int GetSecondLargest(int[] arr) {
        int max = int.MinValue;
        int ans = -1;
        foreach (var elem in arr)
        {
            max = int.Max(max,elem);
        }
        foreach (var elem in arr)
        {
            if (elem != max)
            {
                ans = int.Max(ans,elem);
            }
        }
        return ans;
        
    }
}
