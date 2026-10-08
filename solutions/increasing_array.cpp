#include <iostream>
#include <vector>

using namespace std;

//O(n^2) algo
//traverse thru the array
//if arr[i-1] <= arr[i] continue
//if arr[i-1] > arr[i]
    //arr[i-1]++
    //steps++


//O(n) algo
int main()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long steps = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            steps += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << steps << '\n';

    return 0;
}