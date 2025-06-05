#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i< n; i++){
        cin >> arr[i];
    }

    bool isPalindrome = true;
    for(int i = 0, j = n-1; i< j; ++i, --j){
        if(arr[i] != arr[j]){
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "YES" : "NO") << endl;

    return 0;
}
