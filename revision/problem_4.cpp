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
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    int leftTotal = l.math_marks + l.eng_marks;
    int rightTotal = r.math_marks + r.eng_marks;

    if (leftTotal == rightTotal)
    {
        return l.id < r.id;
    }
    else
    {
        return leftTotal > rightTotal;
    }
}

int main()
{
    int n;
    cin >> n;

    Student stud[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stud[i].name >> stud[i].cls >> stud[i].section >> stud[i].id >> stud[i].math_marks >> stud[i].eng_marks;
    }

    sort(stud, stud + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << stud[i].name << " " << stud[i].cls << " " << stud[i].section << " " << stud[i].id << " " << stud[i].math_marks << " " << stud[i].eng_marks << endl;
    }

    return 0;
}
