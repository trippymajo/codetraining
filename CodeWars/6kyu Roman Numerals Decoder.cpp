#include <iostream>
#include <string>

using namespace std;

int solution(string roman)
{
    int iRetVal = 0;
    int iSize = roman.size();

    unordered_map<char, unsigned int> Lib;
    unordered_map<char, unsigned int>* pLib = &Lib;
    Lib['M'] = 1000;
    Lib['D'] = 500;
    Lib['C'] = 100;
    Lib['L'] = 50;
    Lib['X'] = 10;
    Lib['V'] = 5;
    Lib['I'] = 1;

    for (int i = 0; i < iSize; i++)
    {
        auto it1 = pLib->find(roman[i]);
        it1 != pLib->end();
        if (i + 1 < iSize)
        {
            auto it2 = pLib->find(roman[i + 1]);
            it2 != pLib->end();
            it1->second >= it2->second ? iRetVal += it1->second : iRetVal -= it1->second;
        }
        else
            iRetVal += it1->second;
    }
    return iRetVal;
}