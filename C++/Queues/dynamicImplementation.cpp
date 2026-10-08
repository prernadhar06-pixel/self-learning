//dynamic implementation of queues using linked lists
#include <iostream>
using namespace std;

struct node {
    int info;
    node *next;
};

node *front = nullptr;
node *rear = nullptr;

void enqueue(int value) {
    node *newnode = new node();
    newnode->info = value;
    newnode->next = nullptr;

    if (front == nullptr) { //first node in ll, empty ll
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue is empty\n";
        return;
    }
    node *temp = front;
    if (front == rear) { // one node only
        front = rear = nullptr;
    } else {
        front = front->next;
    }
    delete temp;
}

void peek() {
    if (front == nullptr) {
        cout << "Queue is empty\n";
    } else {
        cout << front->info << endl;
    }
}

void traverse() {
    if (front == nullptr) {
        cout << "Queue is empty\n";
        return;
    }

    node *temp = front;
    while (temp != nullptr) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
    
}