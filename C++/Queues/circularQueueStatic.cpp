#include <iostream>
using namespace std;
#define size 5

int cq[size];
int front = -1;
int rear = -1;
void enqueue(int value){
          if(front == (rear + 1)%size){
                    cout<<"queue is full\n";
                    return;
          }else if(front == -1 && rear == -1){
                    front = rear = 0;
                    cq[rear] = value;
                    return;
          }else{
                    rear = (rear+1) % size;
                    cq [rear] =  value;
          }
}
void dequeue(){
          if(front ==-1){
                    cout<<"empty\n";
                    return;
          }else if ( front == rear ){
                    front = rear = -1; return;
          }else{
                    front = (front + 1) % size;
          }
}void display(){
          if(front == -1){
                    cout<<"empty\n";
          }else if(front == rear){
                    cout<<cq[rear];
          }else{
                    for(int i = front; i != rear; i= (i+1)%size){
                              cout<<cq[i]<<" ";
                              cout<< cq[rear]<<"\n";
                    }
          }
}