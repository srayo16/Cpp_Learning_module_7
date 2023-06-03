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
    for (int i = 0; i < 3; i++)
    {

        cout << arr[i].name << endl;
        cout << arr[i].roll << endl;
        cout << arr[i].age << endl;
    }

    return 0;
}