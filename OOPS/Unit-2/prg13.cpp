//develop a program to demonstrate different types of destructor behavior in object oriented programming 
#include <iostream>
using namespace std;

class Student
{
private:
    int data;

public:

    // Constructor
    Student(int x)
    {
        data = x;
        cout << "Constructor called for object with data = "
             << data << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for object with data = "
             << data << endl;
    }
};

int main()
{
    cout << "Creating first object:" << endl;
    Student s1(10);

    cout << "\nCreating second object:" << endl;
    Student s2(20);

    cout << "\nEntering a block:" << endl;
    {
        Student s3(30);
        cout << "Inside block" << endl;
    }   // s3 is destroyed here- object is destroyed when it goes out of scope/bounds

    cout << "\nBack in main()" << endl;

    return 0;
}   // s2 and s1 are destroyed here


//implement a program to pass object and argument to perform operations for user defined data