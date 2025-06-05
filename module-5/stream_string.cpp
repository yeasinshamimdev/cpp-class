#include <iostream>
#include <algorithm>
#include <string.h>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word;
    }

    return 0;
}
