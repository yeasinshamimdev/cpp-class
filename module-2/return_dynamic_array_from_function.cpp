#include <iostream>
#include <algorithm>

using namespace std;

int* fun (){
    int* arr = new int[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    return arr;
}

int main(){
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}