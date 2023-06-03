#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int age;

    // Student(string name, int roll, int age)
    // {
    //     (*this).name = name;
    //     this->roll = roll;
    //     this->age = age;
    // }
};

bool cmp(Student a, Student b)
{
    if (a.age < b.age)
        return true;
    else
        return false;
}

int main()
{
    Student arr[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll;
        cin >> arr[i].age;
        cin.ignore();
    }

    // sort

    sort(arr, arr + 3, cmp);
    cout << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << arr[i].name << endl;
        cout << arr[i].roll << endl;
        cout << arr[i].age << endl;
    }
    return 0;
}