#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main (){
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(a + b == c || a - b == c || a * b == c){
        cout << "Yes" << endl;
    }
    else {
        switch (s)
        {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a *b;
            break;
        
        default:
            break;
        }
    }

    return 0;
}
