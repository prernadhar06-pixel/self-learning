// design a program using pointer objects and array of objects to manage dynamic data structures
#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Array of objects
    Student students[50];

    cout << "\nEnter student details:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    // Pointer to object
    Student *ptr;

    ptr = &students[0];

    cout << "\nDetails using pointer to object:\n";
    ptr->display();

    // Dynamically creating an object
    Student *dynamicStudent = new Student;

    cout << "\nEnter details for dynamically created student:\n";
    dynamicStudent->input();

    cout << "\nDetails of dynamically created student:\n";
    dynamicStudent->display();

    // Free dynamically allocated memory
    delete dynamicStudent;

    cout << "\nDetails of all students using array of objects:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }

    return 0;
}