#include <iostream>
#include <queue>
using namespace std;

int main(){
          deque <int> dq;
          dq.push_back(10);
          dq.push_back(20);
          dq.push_front(5);
          cout<<dq.front();
          cout<<dq.back();
          dq.pop_front();
          dq.pop_back();
          cout<<"remaining elements";
          for(int x : dq){
                    cout<<x<<" ";
          }
          return 0;
}

//prof said this is static but this is static and do dynamic on your own but... this is dynamic..? deque <int> dq's size is dynamic and not fixed.