//improved prg4 using costructor
#include <iostream>
using namespace std;
class Bank {
          private: 
          int balance;
          public:
          Bank(int b){
                    cin>>b;
                    b=balance;
          }
          void deposit(int added){
                    balance += added; 
          }
          float withdraw(int withdraw){
                    if(withdraw<balance){
                              balance -= withdraw;
                    }
                    else{
                              cout<<"insufficient balance"<<endl;
                    }
          }
          void display(){
                    cout<<balance;
          }
};

int main(){
          Bank.B(1000);
          B.deposit(100);
          B.withdraw(50);
          B.display();

          return 0;
}