public class Solution
{
    public bool BackspaceCompare(string s, string t)
    {
        Stack<char> stackS = new Stack<char>();
        Stack<char> stackT = new Stack<char>();
        foreach (char x in s)
        {
            if (x == '#')
            {
                stackS.TryPop(out _);
            }
            else
            {
                stackS.Push(x);
            }
        }

        foreach (char x in t)
        {
            if (x == '#')
            {
                stackT.TryPop(out _);
            }
            else
            {
                stackT.Push(x);
            }
        }

        if (stackT.Count != stackS.Count)
        {
            return false;
        }
        while (stackS.Count != 0 && stackT.Count != 0)
        {
            stackT.TryPop(out char top1);
            stackS.TryPop(out char top2);
            if (top1 != top2)
            {
                return false;
            }
        }
        return true;
    }
}