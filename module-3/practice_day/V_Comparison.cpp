#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main (){
    int a, b;
    char s;
    cin >> a >> s >> b;
    
    bool correct = false;
    if(s == '<' && a < b) correct = true;
    else if(s == '>' && a > b)  correct = true;
    else if(s == '=' && a == b) correct = true;

    cout << (correct ? "Right" : "Wrong") ;

    return 0;
}
