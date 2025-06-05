#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    string s = "hello world";
    string s2 = " hi2";

    // s.erase(3, 3);
    s.insert(5, "shamim");
    // s.replace(6, 5, "Bangladesh");
    // s.assign("ami koi");
    // s = "gello";
    // s.push_back('A');
    // s.pop_back();
    // s += s2;
    // s.append(s2);
    cout << s;

    return 0;
}
