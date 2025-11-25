#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    int result;
    if (s == '+' && q == '=')
    {
        result = a + b;
        if (result == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }

    else if (s == '-' && q == '=')
    {

        result = a - b;
        if (result == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }
    else if (s == '*' && q == '=')
    {

        result = a * b;
        if (result == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << result;
        }
    }

    return 0;
}
