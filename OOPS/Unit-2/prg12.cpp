/* DESTRUCTOR
SPECIAL MEMBER FUNCTION in the class that is automatically called when an object goes out of scope or is deleted. it is used to release resources like memory, files or network connections.
Has the same name as the class, preceded by ~
Has no return type
Takes no arguments
Is called automatically
Is generally used for cleanup/releasing resources
Runs when an object's lifetime ends*/


//wap to create a bank account class that initializes the balance using a constructor and displays a message using a destructor

#include <bits/stdc++.h>
using namespace std;
class BankAccount{
    double balance;
    public:
    //Constructor
    BankAccount(){
        balance=5000;
        cout<<"Account created"<<endl;
    }
    void display(){
        cout<<"Balance:Rs. "<<balance<<endl;
    }
   ~BankAccount()
   {
    cout<<"Account objective destroyed"<<endl;
   }
};
int main() {
    BankAccount account;
    account.display();   
}

//wap to create a car class use a constructot to initialize the car model and price and a destructor to display a message when the object is removed 