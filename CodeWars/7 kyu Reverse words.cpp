using namespace std;

std::string reverse_words(std::string str)
{
    std::string retVal;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            retVal += " ";
        }
        else
        {
            std::string strTemp;
            for (int j = 0; str[i] != ' ' && i < size; j++)
            {
                strTemp += str[i];
                i++;
            }
            std::reverse(strTemp.begin(), strTemp.end());
            retVal += strTemp;
            i--;
        }

    }
    return retVal;
}