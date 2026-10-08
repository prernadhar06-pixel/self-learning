#include <iostream>
using namespace std;
#define MAXSIZE 5

void delete_max(){
if(size==0){
                    cout<<"queue is empty";
                    return;
          } else {
                    cout<<"deleted element:"<<arr[size-1];
                    size--;
          }
}
void insert (int x){
    if(size== MAXSIZE){
        cout<<"queue is full";
    }else{
        int i= size-1;  //reverse traversing for max in min 
        while(i>=0 && arr[i]>x){  //finding the val smaller than x
            arr[i+1] = arr[i];
            i--;
        }arr[i+1] = x;  //when found, insert x before i where smaller exists
        size++;
    }
}

void peek(){
    if(size == 0){
        cout<<"empty";
        return;
    }
    cout<<"peek: "<<arr[size-1];
}

void display(){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}