#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool palindrome = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            palindrome = false;
        }
        i++;
        j--;
    }

    if (palindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
