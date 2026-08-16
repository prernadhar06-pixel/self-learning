#include <bits/stdc++.h>
using namespace std;

//dynamic implementation of stack

struct Node {
    int info;
    Node *next;
};
Node *top = NULL;

void push (int x){
    Node *temp = new Node;
    temp -> info = x;
    temp -> next = top;
    top = temp;
}

void pop(){
    if (top == NULL ){
        cout<<"stack is empty";
        return;
    }
    Node * temp = top;
    top = top -> next;
    delete temp;
}

void peek (){
    if (top == NULL){
        cout<<"stack is empty";
        return;
    }
    cout<<"top element is "<< top -> info;
}

void traverse(){
    if(top == NULL){
        cout<<"stack is empty";
        return;
    }
    Node * temp = top;
    while (temp != NULL){
        cout<<temp -> info<<" ";
        temp = temp -> next;
    }
}

int main() {
    int ch, value;
    do{
       // cout<<"1 push"<<endl;
       // cout<<"2 pop"<<endl;
       // cout<<"3 peek"<<endl;
       // cout<<"4 traverse"<<endl;
       // cout<<"5 exit"<<endl;
       // cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1: 
                //cout<<"enter element: ";
           cin>>value;
           push(value);
           break;
           case 2: 
           pop();
           break;
           case 3:
           peek();
           break;
           case 4:
           traverse();
           break;
           case 5:
    cout<<"\nexit";
    break;

default:
    cout<<"insufficient choice";
}
}while(ch!=5);

}