// wap to create a student class with data members marks. use a copy costructor to copy the marks of one student object into another object
// create a class employee having id and salary. initialize the first object using a parameterized constructor and create the second object using a copy constructor
#include <iostream>
#include <string>
using namespace std;

class student{
          private:
          int marks;
          string name;
          public:
          student (int m, string n){
                    marks = m;
                    name = n;
          }
          student (const student &s){
                    marks = s.marks;
                    name = "null";
          }
};

class employee{
          int id;
          float salary;
          employee(int i, float s){
                    
          }
};


int main (){
          student s1(95, "prerna");
          student s2 (s1);  //marks - 95, name - null
}
