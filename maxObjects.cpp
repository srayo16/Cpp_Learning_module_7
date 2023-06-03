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

    Student mx;
    mx.age = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i].age > mx.age)
        {
            mx = arr[i];
        }
    }

    Student min;

    min.age = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i].age < min.age)
        {
            min = arr[i];
        }
    }

    cout << mx.name << " " << mx.roll << " " << mx.age << endl;
    cout << min.name << " " << min.roll << " " << min.age << endl;

    return 0;
}