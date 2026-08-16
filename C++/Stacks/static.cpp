#include <bits/stdc++.h>
#include <stack>
#define MAXSIZE 5
using namespace std;

//static implementation of stacks

class Stack{
    int s[MAXSIZE];
    int top;
    public: 
    Stack(){
        top =-1;
    }
    bool isunderflow(){
        return top==-1;
    }
    bool isoverflow(){
        return top == MAXSIZE-1;
    }
    void push(int x){
        if(isoverflow()){
            cout<<"stack is full"<<endl;
            return;
        }
        top+=1;
        s[top]=x;
        cout<<x<<" pushed into the stack "<<endl;
    }
    void pop(){
        if(isunderflow()){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<s[top]<<" is popped"<<endl;
        top--;
        cout<<"new top is "<<s[top]<<endl;
    }
    void peek (){
        if (isunderflow()){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"\ntop element is "<< s[top]<<endl;
    }
    void traverse(){
        if(isunderflow()){
            cout<<"stack is empty"<<endl;
            return;
        }
        for(int i=top; i>=0;i--){
            cout<<s[i]<<" ";
        }
    }
};

int main() {
	Stack st;
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
	            st.push(value);
	            break;
	       case 2: 
	       st.pop();
	       break;
	       case 3:
	       st.peek();
	       break;
	       case 4:
	       st.traverse();
	       break;
	       case 5:
	       cout<<"\nexit";
	       break;
	       default: cout<<"insufficient choice";
	    }
	}while(ch!=5);

}
