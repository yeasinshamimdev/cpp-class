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
    string s;
    getline(cin, s);

    bool isFound = false;
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES";
            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        cout << "NO";
    }

    return 0;
}
