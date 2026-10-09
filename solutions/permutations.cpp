//making a beautiful permutation

#include <iostream>
#include <vector>

using namespace std;


void b_perm(long long n)
{   
    if (n == 1) 
    {
        cout << 1;
        return;
    }

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return;    
    }

    else
    {   
   
        //even terms
        for (int i = 2; i <= n; i += 2) cout << i << " ";

        //odd terms
        for (int i = 1; i <= n; i += 2) cout << i << " ";        

    }
}

int main(void)
{
    long long input;

    cin >> input;
    b_perm(input);
}