using System;
using System.Linq;

public static class Kata
{
	public static string Disemvowel(string str)
	{
		char[] chArr = { 'a', 'e', 'u', 'i', 'o' };
		foreach (char ch in chArr)
		{
			while (str.ToLower().Contains(ch))
			{
				str = str.Remove(str.ToLower().IndexOf(ch), 1);
			}
		}
		return str;
	}
}
