#include <iostream>
using namespace std;
class Bank {
          private: 
          int balance;
          public:
          int getBalance(){
                    int b;
                    cout<<"enter balance"<<endl;
                    cin>>b;
                    b=balance;
                    return balance;
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
          Bank B;
          B.getBalance();
          B.deposit(100);
          B.withdraw(50);
          B.display();

          return 0;
}