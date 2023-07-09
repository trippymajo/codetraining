#include <cinttypes>
#include <algorithm>

using namespace std;

uint64_t descendingOrder(uint64_t a)
{
	uint64_t out = 0;
	vector <uint64_t> retVal;

	for (int i = 0; a > 0; i++)
	{
		retVal.push_back(a % 10);
		a /= 10;
	}
	sort(retVal.rbegin(), retVal.rend());
	for (int j = 0; j < retVal.size(); j++)
	{
		out = out * 10 + retVal[j];
	}
	return out;
}