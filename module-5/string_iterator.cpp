#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    string s = "hello World";
    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // for (string::iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
