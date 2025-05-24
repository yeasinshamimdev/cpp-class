#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    cout << min(x, y) << endl;
    cout << max(x, y) << endl;
    swap(x, y);

    cout << x << " " <<  y << endl;

    return 0;
}