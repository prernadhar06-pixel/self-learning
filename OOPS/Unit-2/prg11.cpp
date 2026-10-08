// OBJECT AS ARGUMENTS
/*class student{
    int marks;
    public:
    student(int m){
    marks = m;}
    void compare(student s){
    if (marks > s.marks)
            cout << "First student has more marks";
        else
            cout << "Second student has more marks";
    }
};
int main(){
    student s1(77);
    student s2(92);
    s1.compare(s2);  //s1 is the object that calls the function. marks is from s1. s2 is the argument, s.marks is from s2
    return 0;
}
*/


//CALL BY VALUE AND REFERENCE- swapping 
#include <iostream>
using namespace std;


void swap_value(int a, int b){  //wont actually change the values coz only a copy of arguments is passed here. copy of the values swapped but not real values. copy of arg paased, not the real / address to the parameter
          int temp = a;
          a = b;
          b = temp;
}
void swap_ref(int &a, int &b){
          int temp = a;
          a = b;
          b = temp;
}
int main(){
          int a, b;
          cout<<"enter two numbers\n";
          cin>> a >> b;
          swap_value(a,b);
          cout<<"using value "<<a<<" "<<b<<endl;
          swap_ref(a,b);
          cout<<"using reference "<<a<<" "<<b<<endl;
          return 0;
}

// a software comparny wants student information where student details must remain protected from unauthorized modifications. design a suitable class heirarchy demonstrating data hiding, controlled access to the data members and member function defined outside the class. justify your design choices and implement atleast one member function as an inline function outside the class definiton.