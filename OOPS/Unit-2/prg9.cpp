//copy constructor using parameters
#include <iostream>
using namespace std;

class student{
          private:
          int roll;
          string name;
          public:
          student (int r, string n){
                    roll = r; //same value
                    name = n; //apply restriction
          }
          student( const student &s) //call by reference
          //const -> to fix the value, & -> to directly access the memory location

          {
                    roll = s.roll;
                    name = "null"; //restriction applied
          }
};

int main() {
          student s1 (101, "prerna");
          student s2 = s1;
}