// create a class containing student info such as name, roll no. and marks
#include <iostream>
#include <string>
using namespace std;

class studentInfo{
          public:
          string name;
          int roll_no;
          int marks;

          void getInfo(){
                    cout<<"enter name ";
                    cin>>name;
                    cout<<"\nenter roll no ";
                    cin>>roll_no;
                    cout<<"\nenter marks ";
                    cin>>marks;
                    }
};

int main(){
          studentInfo s1;
          s1.getInfo();

          cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.marks<<endl;
          return 0;
}