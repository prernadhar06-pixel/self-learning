//static implementation of queues using arrays
#include <iostream>
using namespace std;
#define MAXSIZE 5

int q [MAXSIZE];
int front = -1;
int rear = -1;
bool (isoverflow()){
          return rear = MAXSIZE-1;
}
bool (isunderflow()){
          return front = -1;
}
void enqueue(int value){
          if(isoverflow()){
                    cout<<"queue is full /n";
                    return;
          }else if(front == -1){ //first enqueue
                    front = rear = 0;
                    q[rear] = value;
          }else{ 
                    rear++;
                    q[rear] = value;
          }
}
void dequeue(){
          if (isunderflow()){
                    cout<<"queue is empty \n";
          }else if(front == rear){
                    front = rear = -1;
          }else{
                    front++;
          }
}
void peek (){
          if (isunderflow()){
                    cout<<"stack is empty \n";
                    return;
          }
          cout<<q[front];
}
void display () {
          if(isunderflow()){
                    cout<<"queue is empty";
                    return;
          }else{
                    //traversing using array
                    for(int i=0; i <= rear; i++){
                              cout<<q[i]<<" ";
                    }
          }
}