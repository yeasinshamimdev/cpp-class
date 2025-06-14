#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        while (s1.find(s2) != string::npos)
        {
            int isFound = s1.find(s2);
            s1.replace(isFound, s2.length(), "#");
        }

        cout << s1 << endl;
    }

    return 0;
}
