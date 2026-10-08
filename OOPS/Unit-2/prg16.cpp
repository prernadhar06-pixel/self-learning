//wap in cpp to store a integer in a viariable and display its value using a pointer
#include <iostream>
using namespace std;

/*int main(){
    int a = 10;
    int *p = &a;

    cout<<"value"<< *p <<"\n";
    return 0;

}*/

//Write a c++ programm to use 2 numbers using pointer
int main(){
    int a = 10, b = 5;
    int *p1 = &a, *p2= &b;
    cout<< *p1 + *p2;
}