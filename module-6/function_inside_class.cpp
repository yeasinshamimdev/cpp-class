#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student sakib("Sakib Ahmed", 23, 50, 55);
    sakib.total();
    Student lakib("Lakib Ahmed", 23, 60, 65);
    lakib.total();

    return 0;
}
