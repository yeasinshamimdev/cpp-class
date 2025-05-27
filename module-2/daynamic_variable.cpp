#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int* p;

void fun(){

    int* x = new int;
    *x = 12;
    p = x;
    cout << "Fun function " << *p << endl ;
    return;
}

int main() {
    fun();
    cout << "Main function " << *p << endl;
    return 0 ;
}