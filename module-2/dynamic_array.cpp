#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main (){
    // int arr[5]; // static array
    int* arr = new int; // dynamic array

    for(int i = 0; i< 5; i++){
        cin >> arr[i];
    }

    for(int i = 0; i< 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}