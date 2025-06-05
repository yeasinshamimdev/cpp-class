#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;
    
    Student(int r, int c, int g){
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main (){
    // int r, c;
    // double g;
    // Student sakib;
    // cin >> sakib.roll >> sakib.cls >> sakib.gpa;
    Student tamim(2, 5, 5.90);

    // cout << sakib.roll << " " << sakib.cls << " " << sakib.gpa << endl;
    cout << tamim.roll << " " << tamim.cls << " " << tamim.gpa << endl;

    return 0;
}
