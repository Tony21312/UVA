#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	string num;
	int n1, n2,i,n,len;
	while (cin >> num)
	{	
		len = num.length();
		n = 0;n1 = 0;n2 = 0;i = 0;
		if (num=="0")
		{
			break;
		}
		else
		{
			for (;i < len;i++)
			{
				if (i % 2 == 0)
					n2 = n2 + num[i]-'0';
				else if(i%2==1)
					n1 = n1 + num[i]-'0';
			}
			n = abs(n1 - n2);
		}
		if(n % 11 == 0 )
			cout << num <<" is a multiple of 11." << endl;
		else
			cout << num << " is not a multiple of 11." << endl;
			num = "0";
	}
}