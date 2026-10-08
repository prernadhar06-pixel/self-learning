//CONSTANT OBJECT AND CONSTRUCTOR
/*it is ab object whose data cannot change after it is created
we use the const keyword
it can call only constant member functions*/
//CONSTANT MEMBER FUNCTION
/*member functions can be made constant by putting const after function paranthesis*/
#include <iostream>
#include <string>
using namespace std;

// class student {
//     public: 
//         void show() const{
//             cout << "hello\n";
//         }
// };

// int main() {
//     const student s1;
//     s1.show();
// }


// class emp {
//     private:
//         string name;
//         int emp_id;
//         float salary;
        
//     public:
//         emp(int id, string n, float sal) {
//             name = n;
//             emp_id = id;
//             salary = sal;
//         }

//         void display() const{
//             cout << name << " " << emp_id << " " << salary << "\n";
//         }
// };

// int main() {
//     const emp e1(911, "Prerna", 90000.00);
//     e1.display();
// }

//WAP to create a student class making static data members count with const and destructor
class student {
    private:
        int rollno;
        string name;
        double marks;
    public:
        
};


// constant object passed as argument-> (const student &s)