#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T)
    {
        long long int minNum = INT_MAX;

        int n;
        cin >> n;
        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                long long result = arr[i] + arr[j] + (j - i);
                if (result < minNum)
                {
                    minNum = result;
                }
            }
        }
        cout << minNum << endl;
        T--;
    }

    return 0;
}
