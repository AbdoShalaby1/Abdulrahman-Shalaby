public class Solution
{
    public bool IsValid(string s)
    {
        Stack<char> par = new();
        bool isValid = true;
        char result;
        foreach(char x in s)
        {
            switch (x)
            {
                case '{':
                    par.Push('{');
                    break;
                case '}':
                    
                    if (par.TryPeek(out result) && result == '{')
                    {
                        par.Pop();
                    }
                    else
                    {
                        isValid = false;
                    }
                    break;

                case '(':
                    par.Push('(');
                    break;
                case ')':

                    if (par.TryPeek(out result) && result == '(')
                    {
                        par.Pop();
                    }
                    else
                    {
                        isValid = false;
                    }
                    break;

                case '[':
                    par.Push('[');
                    break;
                case ']':

                    if (par.TryPeek(out result) && result == '[')
                    {
                        par.Pop();
                    }
                    else
                    {
                        isValid = false;
                    }
                    break;
            }
        }

        if (isValid && par.Count == 0) return true;
        return false;
    }
}