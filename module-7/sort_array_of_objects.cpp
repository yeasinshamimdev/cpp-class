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
    int marks;
};

bool comp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks >= r.marks;
    // if (l.marks == r.marks)
    //     return l.roll < r.roll;
    // else
    //     return l.marks > r.marks;
    // return l.marks >= r.marks;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
