public class Solution
{
    public bool Check(int[] nums)
    {
        bool isValid = true;
        for (int i = 1; i <= nums.Length; i++)
        {
            isValid = true;
            for (int j = i; j - i < nums.Length-1; j++)
            {
                if (nums[(j - 1) % nums.Length] > nums[j % nums.Length])
                    isValid = false;
            }
            if (isValid || nums.Length <= 2) return true;
        }
        if (isValid || nums.Length <= 2) return true;
        return false;
    }
}