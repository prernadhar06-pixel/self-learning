// wap to create a class multiply and use parrameterized constructor to multiply two numbers
// wap to create a rectangle classand use a parameterized constructor to calculate the area of a rectangle
//develop a cpp programme to demonstrate different types of constructors behavior in object life cyle management
#include <iostream>
using namespace std;

class multiply{
          public:
          int a,b;
          multiply(int a, int b){
                    int c;
                    c = a*b;
                    cout<<c<<endl;
          }
};

int main(){
          int a, b;
          cout<<"enter the numbers"<<endl;
          cin>>a>>b;
          multiply m1(a, b);    
}