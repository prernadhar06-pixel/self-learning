#include <bits/stdc++.h>
using namespace std;

int Prefix (string prefix){
    reverse(prefix.begin(),prefix.end());
    stack <int> st;
    for (char ch: prefix){
        if(ch==' ')
        continue;
        if(isdigit(ch)){
            st.push(ch-'0');
        }else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            switch(ch){
            case '+': st.push(a+b);
            break;
            case'-': st.push(a-b);
            break;
            case'*': st.push(a*b);
            break;
            case'/': st.push(a/b);
            break;
            case'^': st.push(pow(a,b));
            break;
            }
        }
    }
    return st.top();
}
int main(){
string prefix;
cout<<"enter prefix expression"<<endl;
getline(cin, prefix);
cout<<"result = "<< Prefix(prefix);
return 0;
}