#include <iostream>
using namespace std;
#define maxsize 5;
int size;
void enqueue(int value){
          if(size == maxsize){
                    cout<<"overflow /n";
          }else{
                    arr[size]=value;
                    size++;
          }
}
void dequeue(){
          if(size == 0){
                    cout<<"empty\n";
          }else{
                    int maxindex = 0;
                    for(int i =1; <size; i++){
                              if(arr[i]>arr[maxindex]){
                                        maxindex++;
                              }
                    }cout<<arr[maxindex]<<"deleted"<<endl;
                    for(int i = maxindex; i<(size-1); i++){
                              arr[i] = arr [i+1];
                    }
                    size -=i;
          }
}void display(){
          if(size == 0){
                    cout<<"empty";
          }else{
                    for(int i = 0; i<size; i++){
                              cout<<arr[i];
                    }
          }
}

//sorted unsorted?