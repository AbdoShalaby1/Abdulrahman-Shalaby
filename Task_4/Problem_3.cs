public class Solution {
    public int MissingNumber(int[] nums) {
        int sum = (nums.Length * (nums.Length + 1)) / 2;
        foreach (var element in nums)
        {
            sum -= element;
        }
        return sum;
    }
}