#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
    Student(int id, string name, char section, int marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};

Student *chatro(int id, string name, char section, int marks)
{
    Student *stud = new Student(id, name, section, marks);
    return stud;
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int id;
        string name;
        char section;
        int marks;
        cin >> id >> name >> section >> marks;
        Student *st1 = chatro(id, name, section, marks);
        cin >> id >> name >> section >> marks;
        Student *st2 = chatro(id, name, section, marks);
        cin >> id >> name >> section >> marks;
        Student *st3 = chatro(id, name, section, marks);

        if (st1->marks >= st2->marks || st1->marks >= st3->marks)
        {
            cout << st1->id << " " << st1->name << " " << st1->section << " " << st1->marks << endl;
        }
        else if (st2->marks > st1->marks || st2->marks >= st3->marks)
        {
            cout << st2->id << " " << st2->name << " " << st2->section << " " << st2->marks << endl;
        }
        else if (st3->marks > st1->marks || st3->marks > st2->marks)
        {
            cout << st3->id << " " << st3->name << " " << st3->section << " " << st3->marks << endl;
        }
    }

    return 0;
}
