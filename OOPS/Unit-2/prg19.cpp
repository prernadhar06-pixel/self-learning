//this pointer - to counter naming conflict. stores the memory address of the variable. same name of data member and the parameter passed. 

//'this' pointer is a special pointer availlable inside a non-static member function of a class. it points to the current object that is calling the function and is used to access its member

//need : the most common use is when the data member and the parameter have the same name

#include <iostream>
using namespace std;

/*class student{
    int marks;
    public:
    void setMarks(int marks){
        this -> marks = marks;
    }void display(){
        cout<<"marks: "<<marks;
    }
};
int main(){
    student s1;
    s1.setMarks(85);
    s1.display();
    return 0;
}*/

class 