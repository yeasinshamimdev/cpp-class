#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    // cin >> s;
    cin.ignore();
    getline(cin, s);

    cout << x << endl;
    cout << s << endl;

    return 0;
}
