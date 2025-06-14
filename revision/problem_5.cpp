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
    if (l.eng_marks != r.eng_marks)
    {
        return l.eng_marks > r.eng_marks;
    }
    else if (l.math_marks != r.math_marks)
    {
        return l.math_marks > r.math_marks;
    }
    else
    {
        return l.id < r.id;
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
