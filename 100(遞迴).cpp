#include <iostream>
using namespace std;

// returns the maximum cycle-length over all integers
// between and including first and last
int maxCycleLength(int first, int last);

int cycleLength(int n); // returns the cycle-length of n

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        cout << i << ' ' << j << ' ';

        if (i > j)
        {
            int buf = i;
            i = j;
            j = buf;
        }

        cout << maxCycleLength(i, j) << endl; // i < j
    }
}

int maxCycleLength(int first, int last)
{
    if (first == 1)
    {
        cycleLength(first);
    }

    if (first == last)
    {
        cycleLength(first);
    }
    else if (first < last)
    {
        int n1 = maxCycleLength(++first, last);
        int n2 = cycleLength(--first);
 //       cout << n1 << " " << n2 << endl;;
        if (n1 >= n2)
            return n1;
        else
            return n2;
    }
    return cycleLength(first);
}

int cycleLength(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        if (n % 2 != 0)
        {
            return 1 + cycleLength(n * 3 + 1);
        }
        else
        {
            return 1 + cycleLength(n / 2);
        }
    }

}