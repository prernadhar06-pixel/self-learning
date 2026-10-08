#include <iostream>
using namespace std;

class rectangle{
          public:
          int result;

          int area(int l, int b){
                    return result = l*b;
          }
};

int main() {
          int a, b;
          rectangle r;
          cout<<"enter length : ";
          cin>>a;
          cout<<"\nenter breadth : "<<endl;
          cin>>b;
          cout<<r.area(a,b);
          return 0;
}

//why use access specifier here?? -> 