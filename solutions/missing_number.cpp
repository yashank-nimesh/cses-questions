#include <iostream>
#include <vector>

using namespace std;

void num(int n, vector<int> arr)
{
    long long sumArr = 0;
    long long sum = 1LL * n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        sumArr += arr[i];
    }

    cout << sum - sumArr;
}

int main(void)
{
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    num(n, arr);

    return 0;
}