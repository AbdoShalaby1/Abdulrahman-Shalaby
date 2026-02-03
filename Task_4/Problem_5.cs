public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int curr = 0;
        foreach (var n in nums)
        {
            if (n == 1)
            {
                curr++;
            }
            else
            {
                max = int.Max(max,curr);
                curr = 0;
            }
        }
        return int.Max(max,curr);
    }
}