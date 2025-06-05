#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;
    
    Student(int roll, int cls, int gpa){
        (*this).roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main (){
    Student sakib(10, 5, 2.540);
    Student tamim(2, 5, 5.90);

    cout << sakib.roll << " " << sakib.cls << " " << sakib.gpa << endl;
    cout << tamim.roll << " " << tamim.cls << " " << tamim.gpa << endl;

    return 0;
}
