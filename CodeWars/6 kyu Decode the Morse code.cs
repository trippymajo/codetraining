class MorseCodeDecoder
{
	public static string Decode(string morseCode)
	{
		string retVal = null, morseWord = null;
		morseCode.Trim();
		string[] words = morseCode.Split(" ");
		foreach (string letter in words)
		{
			if (letter == "")
			{
				retVal += " ";
			}
			retVal += MorseCode.Get(letter);
		}
		retVal = string.Join(" ", retVal.Split(new char[] { ' ' }, System.StringSplitOptions.RemoveEmptyEntries));
		return retVal;
	}
}
