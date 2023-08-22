public static class Kata
{
    public static int Solution(int value)
    {
        int retVal = 0;
        value--;
        while (value > 0)
        {
            if (value % 3 == 0 || value % 5 == 0)
                retVal += value;
            value -= 1;
        }
        return retVal;
    }
}