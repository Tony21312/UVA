#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;
int main()
{
	int cases, familys,distance , mid1, mid2 , m ;
	float num,n[500],distance1;
	cin >> cases;
	for (int k = 0;k < cases;k++)
	{
		distance1 = 0;m = 0;num = 0;
		cin >> familys;
		while (m < familys)
		{
			cin >> n[m];
			m++;
		}
		sort(n, n + m);
		mid1 = m / 2;
		mid2 = (m / 2) - 1;
		if (m % 2 == 1)
			num = n[mid1];
		if (m % 2 == 0)
			num = (n[mid1]+n[mid2])/2;
		for (int i =0;i<familys;i++)
		{
			distance1 += abs(n[i] - num);
			distance = distance1;
		}
		cout << distance << endl;
	}
}