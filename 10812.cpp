#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int cases, s, d, team1, team2;
	cin >> cases;
	for (int i = 0;i < cases;i++)
	{
		cin >> s >> d;
		if(d>s||d<0||s<0)
			cout << "impossible" << endl;
		else
		{
			if ((s + d) % 2 == 1)
			{
				cout << "impossible" << endl;
			}
			else if((s+d)%2==0)
			cout << (s + d) / 2 << " " << abs(s - d) / 2 << endl;
		}
	}
}