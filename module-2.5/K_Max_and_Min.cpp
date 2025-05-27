#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int mn = INT_MAX;
    int mx = INT_MIN;
    
    mn = min({x, y,z});
    mx = max({x, y, z});

    cout << mn << " " << mx << endl;


    return 0;
}