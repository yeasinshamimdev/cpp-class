#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int indexLen = 0;

        for (int j = n - 1; j >= 0; j--)
        {
            if (sum + arr[j] <= s)
            {
                indexLen++;
                sum += arr[j];
            }
        }

        if (sum != s || indexLen != 3)
        {
            cout << "NO" << endl;
        }
        else if (sum == s)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
