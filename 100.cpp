#include <iostream>
using namespace std;
int main()
{
	int range1, range2, n,replace1,replace2,j,k,l;
	while (cin >> range1 >> range2)
	{
		if (range1 == 1 && range2 == 1)
			cout << range1 << " " << range2 << " "<< 1 << endl;
		else
		{
			n = 0; replace1 = range1; replace2 = range2;
			if (replace1 > replace2)
			{
				l = replace2;
				replace2 = replace1;
				replace1 = l;
			}
			for (int i=replace1;i <= replace2;i++)
			{	
				j = i;
				k = 1;
				while (1)
				{	
					if (j == 1||j == 2)
						break;
					if (j % 2 == 0)
						j /= 2;
					else if (j % 2 == 1)
						j = 3 * j + 1;
					k++;
				}
				k = k + 1;
				if (k > n)
					n=k;
			}
			cout << range1 << " " << range2 << " " << n << endl;
		}
	}
}