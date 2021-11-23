#include<iostream>
using namespace std;

bool judge(int num, int divisor);

int main()
{
	int number,divisor,num;
	while (cin >> number >> divisor)
	{
		num = number;
		if (divisor == 0||divisor==1)
			cout << "Boring!" << endl;
		else if (judge(num,divisor))
			cout << "Boring!"<< endl;
		else 
		{
			while (1)
			{
				if (number == 1)
				{
					cout << number << endl;
					break;
				}
				else
				{
					cout << number << " ";
					number /= divisor;
				}
			}
		}
	}
}
bool judge(int num, int divisor)
{
	if (num < divisor)
		return true;
	else if (num == divisor)
		return false;
	else
	{
		while(1)
		{
			if (num % divisor == 0)
				num /= divisor;
			else if (num == 1)
				return false;
			else
				return true;

		}
	}
}