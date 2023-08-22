#include <iostream>
#include <string>

using namespace std;

int solution(string roman)
{
    cout << "Start: " << clock();
    int iRetVal = 0;
    int iSize = roman.size();
    unordered_map<char, unsigned int> Lib = { {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1} };
    unordered_map<char, unsigned int>* pLib = &Lib;

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
    cout << "End: " << clock();
    return iRetVal;
}