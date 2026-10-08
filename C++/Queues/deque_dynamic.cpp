//understand the implementation!!!!!!!
#include <iostream>
using namespace std;

struct node{
          int info;
          node* next;  //pointers for structures
          node* pre;
};
node *front = NULL;  //pointers for traversing
node *rear = NULL;

void insertFront(int x){
          node *newNode = new node();  //this is a constructor, creates an object for the class, initializes all data members inside class
          newNode -> info = x;
          if (front == NULL){  //when queue is empty
                    newNode -> pre = newNode -> next = NULL;  //both pointers are null
                    front = rear = newNode;  //both pointers point to newNode
          }else{  //existing queue
                    newNode -> pre = NULL;   //pre of the new node points to null since its the first element
                    newNode -> next = front;  // the next pointer of newnode points to the previous front
                    front -> pre = newNode;  // the pre pointer of the previous front points to the new node
                    front = newNode;  //front poiter updated to the newnode
          }
}

void insert_rear (int x){
          node* newNode = new node();
          newNode -> info = x;
          if(front == NULL && rear == NULL){
                    newNode -> pre = newNode -> next = NULL;
                    front = rear = newNode;
          }else{
                    newNode -> next = NULL;
                    rear -> next = newNode;
                    newNode -> pre = rear;
                    rear = newNode;
          }
}

void delete_front(){
          if(front == NULL){
                    cout<<" queue is empty";
                    return;
          } node *todel = front;
          if (front == rear){
                    front = rear = NULL;
                    delete todel;
          }
          todel -> next = front;  //else part
          todel -> pre = NULL;
          delete todel;
}

void delete_rear(){
          if(rear == NULL){
                    cout<<"enpty";
                    return;
          }
          node *todel = rear;
          if(front == rear){
                    front = rear = NULL;
                    delete todel;
                    return;
          }
          rear -> pre = rear;
          rear -> next = NULL;
          delete todel;
}

void display(){
          node *temp = front;
          if(front == NULL){
                    cout<<"empty";
                    return;
          }while (temp != NULL){
          cout<<temp -> info<<" ";
          temp=temp -> next;}
}
