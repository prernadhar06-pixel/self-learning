//student class with constructor that accepts student name and class
// create a student class with a default constructor that accepts student name and marks 
#include <iostream>
#include <string>
using namespace std;

class student{
          public:
          int roll;
          string name;
          student(int roll, string name){
                    cout<<"your name "<<name<<endl;
                    cout<<"roll no "<<roll<<endl;
          }
};

int main(){
          student s1(101,"Prerna");
          return 0;
}