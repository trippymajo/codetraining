#include <vector>

PeakData pick_peaks(const std::vector<int>& v)
{
    PeakData result;
    int iSize = v.size();
    int iTemp = 0;

    for (int i = 1; i < iSize - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] >= v[i + 1])
        {
            iTemp = i;
            while (i < iSize - 1 && v[i] == v[i + 1]) i++;
            if (i < iSize - 1 && v[i] > v[i + 1])
            {
                result.pos.push_back(iTemp);
                result.peaks.push_back(v[iTemp]);
            }
        }
    }

    return result;
}