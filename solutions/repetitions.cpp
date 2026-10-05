#include <iostream>
#include <vector>
#include <string>

using namespace std;

int finder(string &sequence)
{
    int longest = 1;
    int current = 1;

    for (int i = 1; i < sequence.size(); i++)
    {
        if (sequence[i] == sequence[i - 1]) current++;
        else current = 1;

        if (current > longest) longest = current;
    }

    return longest;
}

int main()
{
    string sequence;
    cin >> sequence;

    cout << finder(sequence);
}