#include <iostream>
using namespace std;
int main()
{
	int num1, num2, n, n1, n2,i,m[20];
	i = 1;m[0] = 0;
	while (cin >> num1 >> num2)
	{
		if (num1 == 0 && num2 == 0)
			break;
		n = 0;
		while (1)
		{
			n1 = num1 % 10;
			num1 /= 10;

			n2 = num2 % 10;
			num2 /= 10;
			m[i] = (n1 + n2) / 10;
			if (n1 + n2 +m[i] >= 10)
				n++;
			i++;
			if (num1 == 0 || num2 == 0)
				break;
		}

		if (n == 0)
			cout << "No carry operation." << endl;
		else if (n == 1)
			cout << n << " carry operation." << endl;
		else
			cout << n << " carry operations." << endl;
	}
}