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
    cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
