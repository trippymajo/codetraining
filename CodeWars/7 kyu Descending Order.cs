using System;
using System.Collections;

public static class Kata
{
	public static int DescendingOrder(int num)
	{
		ArrayList arrList = new ArrayList();

		while (num != 0)
		{
			arrList.Add(num % 10);
			num /= 10;
		}

		arrList.Sort();
		arrList.Reverse();

		foreach (int j in arrList)
		{
			num = num * 10 + j;
		}
		return num;
	}
}
