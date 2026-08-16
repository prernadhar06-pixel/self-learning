// postfix evaluation
#include <iostream>
#include <stack>
#include <cctype> // for isalpha, isdigit etc 
#include <cmath>
using namespace std;

int Postfix(string postfix){
    stack <int> st;
    for (char ch: postfix){
        if(ch==' ')
        continue;
        if(isdigit(ch))
        st.push(ch-'0');  //concept of ASCII values, converts ch to int. example: ch='7'. ch('0') == 48 (int), ch('7') == 55. '7' - '0' = 55-48 = 7
        else{  //operators
            int b = st.top();  // for correct sequence. becoz of LIFO, we need the one added later as the second operator, hence the firt top is b
            st.pop();  // remove the second operator
            int a = st.top();
            st.pop();

            switch (ch)
            { 
                case '+' : st.push(a+b);
                break;
             
                case '-' : st.push(a-b);
                break;

                case '*' : st.push(a*b);
                break;

                case '/' : st.push(a/b);
                break;

                case '^' : st.push(pow(a,b));
                break;
            }
        }
    }
    return st.top();
}

int main (){
    string postfix;
    cout<<"enter postfix expression"<<endl;
    getline(cin, postfix);
    cout<<"result = "<< Postfix(postfix);
    return 0;
}