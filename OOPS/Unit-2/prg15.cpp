//NESTED CLASS
/*it is a class that is declared inside another class. A nested class can be decared under any access specifier
class outer
|--> class inner
|    |-->data members
|--> data members
syntax: outer :: inner object
need of nested class:
    1. when one class is closely replated to another class
    2. the inner class is used to keep related functionality together and organised*/

#include <iostream>
#include <string>
using namespace std;

// class outer {
//     public:
//         class inner {
//             public:
//                 void show() {
//                     cout << "this is inner class" << "\n";
//                 }
//         };
// };

// int main() {
//     outer :: inner obj;
//     obj.show();
//     return 0;
// }

//WAP using a nested class to store student name and their address.

// class student {
//     public:
//         class address {
//             public:
//                 int house_no;
//                 string city;
//                 address() {
//                     house_no = 29;
//                     city = "IP Extension";
//                 }
//                 address(int h, string c) {
//                     house_no = h;
//                     city = c;
//                 }
//                 void display() {
//                     cout << house_no << " " << city << "\n";
//                 }
//         };
//         string name;
//         address add;
//         student (string n, student::address a) {
//             name = n;
//             add = a;
//         }
//         void display() {
//             cout << name << " " << add.house_no << " " << add.city << "\n"; 
//         }
// };

// int main() {
//     student :: address a1(31, "Bareilly");
//     student :: address a2;
//     student s1("Saanvi", a1);
//     student s2("Ridah", a2);

//     s1.display();
//     s2.display();
// }


//WAP using a nested class to display computer details and its processor information

class computer {
    public:
        class processor {
            public:
                int gen;
                char type;
                double clock_speed;
                processor() {
                    gen = 13;
                    type = 'H';
                    clock_speed = 4.50;
                }
        };
        string brand;
        string model;
        processor proc;
        computer(string n, string m, computer::processor p) {
            brand = n;
            model = m;
            proc = p;
        }
        void display () {
            cout << brand << " " << model << " " << proc.gen << proc.type << " " << proc.clock_speed << "\n";
            //proc.gen accesses variable
        }
};

int main() {
    computer::processor p1;  //created an object for nested class to pass it in outer class
    computer c1("HP", "elitebook", p1);  //parameterized constructor, object as argument
    c1.display();
}