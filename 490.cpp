#include<iostream>
using namespace std;
int main()
{
	string strX;
	string strY;
	char space = { ' ' };
	cin >> strX;
	cin >> strY;
	
	for (int i = 0, j = 0; i <= strX.length() || j <= strY.length(); i++, j++)
	{
		cout << strY[j] << strX[i] << endl;
	}
}