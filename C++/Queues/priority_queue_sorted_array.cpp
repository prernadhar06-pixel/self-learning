#include <iostream>
using namespace std;
int arr[5];
int Size = 0 ;
int MAXSIZE = 5;

void del() {
          if (Size == 0){
                    cout<<"priority queue is empty";
          }else {
                    cout<<"deleted element "<<arr[Size-1];
                    Size--;
          }
}
void insert (int x){
          if (Size == MAXSIZE){
                    cout<<"priority queue is full";
          }else{
                    int i =  Size -1;
                    while(i >= 0 && arr [i] > x){
                              arr[i+1] =  arr [i];
                              i--;
                    }arr [i+1] = x;
                    Size++;
          }
}
void peek(){
          if( Size == 0 ){
                    cout<<"priority queue is empty";
                    return;
          }cout<<"peek element is "<<arr[Size - 1];
}
void display (){
          //base case
          for (int i =0; i<Size; i++){
                    cout<<arr[i];
          }
}

int main() {
    int choice, x;

    while (true) {
        cout << "\n\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element: ";
                cin >> x;
                insert(x);
                break;

            case 2:
                del();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice";
        }
    }
}