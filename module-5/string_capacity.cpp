#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    string s = "hello Worl";

    s.resize(15, 'x');
    cout << s << endl;
    // s.clear();
    // s.empty() ? cout << "Empty" : cout << "Not empty";
    // cout << s.size();
    // cout << s.max_size();
    // cout << s.capacity() << endl;

    return 0;
}
