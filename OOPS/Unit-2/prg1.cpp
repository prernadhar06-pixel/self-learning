//WAP to create a student class with data members name, age and display their values
#include <iostream>
#include <string>
using namespace std;

//WAP to create a student class with data members name, age and display their values

class Student {

          public:
          string name;
          int age;

          void display(){
                    cout<<"name: "<<name<<", age: "<<age<<endl;
          }
};

//WAP to create a car class with data members brand name and year and display values

class car{
          public: 
          string brand;
          int year;

          void display (){
                    cout<<"car brand: "<<brand<<", year: "<<year<<endl;
          }
};

int main(){

          Student s1;
          s1.name = "Prerna";
          s1.age = 19;
          s1.display();


          car c1;
          c1.brand =  "tesla";
          c1.year = 2025;
          c1.display();
          return 0;
}