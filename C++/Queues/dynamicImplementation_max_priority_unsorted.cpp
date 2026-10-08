#include <iostream>
using namespace std;

struct node{
    int info;
    node* link;
};

node* front = NULL;
void insert(int x){
    node *newNode = new node();
    newNode -> info = x;
    newNode -> link = front;
    front = newNode;
}

//understand from here
void delete(){
    node *temp = front;
    node *maxnode = front;
    node *pre = NULL;
    node *maxpri = NULL;
    while (temp != NULL){
        if(temp ->info> maxnode -> info){
            maxnode = temp;
            maxpri = pre;
        }
        pre = temp;
        temp = temp -> next;
    }
    if(maxnode == next){
        front = front -> next;
    }
    maxpri -> next = maxnode -> next;
    delete maxnode;
}

void peek(){}