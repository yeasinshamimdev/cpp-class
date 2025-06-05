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

Student fun(){

     Student karim(1, 4, 3.5);
    return karim;
}

int main (){
    Student ka = fun();

    cout << ka.roll << " " << ka.cls << " " << ka.gpa << endl;

    return 0;
}
