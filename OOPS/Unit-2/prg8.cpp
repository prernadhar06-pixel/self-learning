//develop a cpp programme to demonstrate different types of constructors behavior in object life cycle management
#include <iostream>
using namespace std;

class student{
    private:
    int data;
    public:
    student(){  //default constructor
        data = 0;
    }
    student(int value){  //parameterised constructor
        data = value;
    }
    student(const student &s){  //copy constructor- why s here
        data = s.data;
    }
    void display(){  //copy constructor
        cout<<data<<endl;
    }
    ~student(){  //destructor destroyes object in LIFO manner
        cout<<"destructor called"<<data<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    student s2(101);
    s2.display();
    student s3(s2);  //just like passing a parameter but instead you pass a pre-existing object
    s3.display();
}