#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <stack>
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

string prefix(string infix){
    reverse(infix.begin(), infix.end());

    // swap brackets after reversing
    for (char &ch : infix){
        if (ch == '(')
            ch = ')';
        else if (ch == ')')
            ch = '(';
    }

    string prefix = "";

    stack<char> st;

    for (char ch : infix){

        if (isalpha(ch)){
            prefix += ch; //push to prefix
        }

        else if(ch == '('){
            st.push(ch);  //push into stack
        }

        else if(ch == ')'){

            while(!st.empty() && st.top() != '('){
                prefix += st.top();  //pop all to prefix until ( is encountered
                st.pop();
            }

            if(!st.empty())
                st.pop();   // remove '(' from stack
        }

        else{
            while (!st.empty() &&
                   (precedence(st.top()) > precedence(ch) ||
                   (precedence(st.top()) == precedence(ch) && ch == '^'))) {

                prefix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while (!st.empty()){
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main() {
    string a;

    cout << "enter the infix expression" << endl;
    getline(cin,a);

    cout << prefix(a);

    return 0;
}