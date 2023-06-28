std::string decodeMorse(std::string morseCode)
{
    morseCode.erase(0, morseCode.find_first_not_of(" ")); // left trim
    morseCode.erase(morseCode.find_last_not_of(" ") + 1);

    int iSize = morseCode.size();
    std::string decoded;
    std::string morseLetter;

    for (int i = 0; i < iSize; i++)
    {
        if (morseCode[i] != ' ')
        {
            morseLetter = morseLetter + morseCode[i];
            if (i + 1 >= iSize)
            {
                decoded += MORSE_CODE[morseLetter];
            }
        }
        else
        {
            decoded += MORSE_CODE[morseLetter];

            if (morseCode[i + 1] == ' ')
            {
                decoded += " ";
                i++;
            }
            morseLetter = "";
        }
    }
    return decoded;
}