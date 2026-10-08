//SELF-REFERENCIAL CLASSES
/*a class that contains a pointer to an object of the same class
  Eg. tree node, graph node, linked list node
  in the exampple, since the object pointes to the same class, it is called self-referential 
  NEED OF SELF-REFERENCIAL CLASSES:
  1. mainly used to create synamic data structures
  2. ... of anotoher connected data structures*/

#include <iostream>
using namespace std;

// class node {
//     public:
//     int data;
//     node *next;     //pointer to another node object
// };

// int main() {
//     node n1, n2;
//     n1.data = 10;
//     n2.data = 20;
//     n1.next = &n2;      //n1 points to n2
//     n2.next = NULL;     //n2 points to NULL

//     cout << "Data of first node: " << n1.data << "\n";
//     cout << "Data of second node: " << n1.next->data << "\n";

//     return 0;
// }



//WAP using emplyee class to create a linked list by self-referencial class.

// class employee {
//     public:
//         int empid;
//         string name;
//         employee *next;       
// };

// int main() {
//     employee e1, e2, e3;
//     e1.empid = 101;
//     e1.name = "Ridah Abbasi";
//     e2.empid = 102;
//     e2.name = "Saanvi Saxena";
//     e3.empid = 103;
//     e3.name = "Prerna Dhar";

//     e1.next = &e2;     
//     e2.next = &e3;     
//     e3.next = nullptr;    

//     employee *temp = &e1;   
//     while (temp != nullptr) {
//         cout << "Employee ID: " << temp->empid << ", Name: " << temp->name << "\n";
//         temp = temp->next;  
//     }

//     return 0;
// }



//WAP using self-referencial class to create a linked list and add a new node at the end of the list.
class node {
    public:
        int data;
        node *next;     
};

int main() {
    node *head = nullptr;  
    node *tail = nullptr;  

    for (int i = 1; i <= 5; ++i) {
        node *newNode = new node();  
        newNode->data = i;           
        newNode->next = nullptr;     

        if (head == nullptr) {       
            head = newNode;          
            tail = newNode;          
        } 
        else {
            tail->next = newNode;    
            tail = newNode;          
        }
    }

    node *temp = head;             
    while (temp != nullptr) {
        cout  << temp->data << " ";
        temp = temp->next;          
    }

    temp = head;
    while (temp != nullptr) {
        node *nextNode = temp->next;
        delete temp;                
        temp = nextNode;            
    }

    return 0;
}



//WAP using self-referencial class to store student roll numbers and link one student record to another student record.
class student {
    public:
        int rollno;
        student *next;     
};

int main() {
    student *head = nullptr;  
    student *tail = nullptr;  

    for (int i = 1; i <= 5; ++i) {
        student *newStudent = new student();  
        newStudent->rollno = i;               
        newStudent->next = nullptr;           

        if (head == nullptr) {                 
            head = newStudent;                 
            tail = newStudent;                 
        } 
        else {
            tail->next = newStudent;           
            tail = newStudent;                 
        }
    }

    student *temp = head;                    
    while (temp != nullptr) {
        cout << temp->rollno << " ";
        temp = temp->next;                    
    }

    temp = head;
    while (temp != nullptr) {
        student *nextStudent = temp->next;
        delete temp;                          
        temp = nextStudent;                   
    }

    return 0;
}