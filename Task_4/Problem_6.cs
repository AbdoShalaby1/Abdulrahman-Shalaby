class Solution
{
    public int longestSubarray(int[] arr, int k)
    {
        int len = 0;
        int curr = arr[0];
        Dictionary<int, List<int>> pfx = new();
        pfx[arr[0]] = new List<int>(){ 1 }
        ;
        for (int i = 1; i < arr.Length; i++)
        {
            arr[i] += arr[i - 1];
            if (pfx.GetValueOrDefault(arr[i]) is not null)
                pfx[arr[i]].Add(i + 1);
            else
                pfx[arr[i]] = new List<int>() { i+1 };
        }
        len = pfx.GetValueOrDefault(k)?.Max() ?? 0;
        for (int i = 0; i < arr.Length; i++)
        {
            var res = pfx.GetValueOrDefault(arr[i] - k) ?? Enumerable.Empty<int>();
            foreach (var x in res)
            {
                if (x <= i)
                    len = int.Max(len, (i - x + 1));
                else
                    break;
            }
            
        }
        return len;
    } 
}