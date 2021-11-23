#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int army, opponent,range;
	while (cin >> army >> opponent)
	{
		range = abs(army - opponent);
		cout << range << endl;
	}
}