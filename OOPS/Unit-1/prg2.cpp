#include <iostream>
#include <string>
using namespace std;

class employeeInfo{
          public:
          int id;
          string name;
          string dept;
          int salary;

          void getData(){
                    cout<<"enter employee id ";
                    cin>>id;
                    cout<<"enter employee name ";
                    cin>>name;
                    cout<<"enter employee dept ";
                    cin>>dept;
                    cout<<"enter employee salary ";
                    cin>>salary;

          }

          void displayData(int s) {
                    int annual, tax_deduction, other_deduction;
                    annual = s*12;
                    tax_deduction = s - (0.1*s);
                    other_deduction =  s - (0.1 * s) - (0.05 * s);
                    
                    cout<<"annual salary is "<<annual;
                    cout<<"\nsalary after deduction "<<tax_deduction;
                    cout<<"\nsalary after additional deduction "<<other_deduction;
                    // \t inserts horizontal tab space inside text strings
          }
};

int main (){

          employeeInfo e1, e2, e3, e4, e5;

          e1.getData();
          e1.displayData(e1.salary);

          e2.getData();
          e2.displayData(e2.salary);

          e3.getData();
          e3.displayData(e3.salary);

          e4.getData();
          e4.displayData(e4.salary);

          e5.getData();
          e5.displayData(e5.salary);

          return 0;
}