#include <bits/stdc++.h>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int precedence(char op){
    if(op=='^')
        return 3;
    else if(op=='/' || op=='*')
        return 2;
    else if(op=='+' || op=='-')
        return 1;
    return 0;
}

string postfix(string infix){
    string postfix = " ";
    stack<char> st;

    for (char ch : infix){

        if (isalpha(ch)){
            postfix += ch;
        }

        else if(ch == '('){
            st.push(ch);
        }

        else if(ch == ')'){

            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }

            if(!st.empty())
                st.pop();   // remove '('
        }

        else{

            while(!st.empty() &&
                  (precedence(st.top()) > precedence(ch) ||
                   (precedence(st.top()) == precedence(ch) && ch != '^'))){

                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string a;

    cout << "enter the infix expression" << endl;
    getline(cin,a);

    cout << postfix(a);

    return 0;
}