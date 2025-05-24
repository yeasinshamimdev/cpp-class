#include <iostream>
using namespace std;

int main () {
    int x;
    cin >> x;
    cin.ignore();

    char s[100];
    cin >> s;
    cin.getline(s , 100);

    string str;
    cin >> str;
    cout << str;

    cout << x << endl << s << endl;

    return 0;
}