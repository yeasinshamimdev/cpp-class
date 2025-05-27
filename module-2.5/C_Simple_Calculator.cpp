#include<iostream>
using namespace std;

int main (){
    int x;
    long long int y;
    cin >> x >> y;
    int sum = x + y;
    long long int multi = x * y;
    int subs = x -y;

    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << multi << endl;
    cout << x << " - " << y << " = " << subs << endl;

    return 0;
}