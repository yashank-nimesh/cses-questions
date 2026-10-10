#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x,y;
        cin >> x >> y;

        long long m = max(x,y);
        long long z;

        if (m % 2 == 0)
        {
            if (x == m)
            {
                z = m*m - y + 1;
            }
            else
            {
                z = (m-1) * (m-1) + x;
            }
        }

        else
        {
            if (y == m)
            {
                z = m*m - x + 1;
            }
            else
            {
                z = (m - 1) * (m - 1) + y;
            }
        }

        cout << z << "\n";
    }
}
