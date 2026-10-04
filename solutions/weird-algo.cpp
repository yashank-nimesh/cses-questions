#include <iostream>

using namespace std;


void weirdAlgo(long long n);

int main(void)
{   
    long long input;
    cin >> input;

    weirdAlgo(input);

    return 0;
}

void weirdAlgo(long long n)
{  
    while (n != 1)
    {   
        cout << n << " ";
        if (n%2 == 0) n /= 2;
        else n = (n*3) + 1;
    }
    
    cout << 1;
}