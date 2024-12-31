#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(x[i], x[j]);
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }

    return 0;
}
