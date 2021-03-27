#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='^')
        return true;
    return false;
}

int preceDence(char c)
{
    if(c=='+' || c=='-')
        return 1;
    if(c=='*' || c=='/')
        return 2;
    if(c=='%')
        return 3;
    if(c=='^')
        return 4;
}

int main()
{
    stack<char>stk;
    stk.push('(');

    string s,postfix;
    cin>>s;

    s+=')';

    for(int i=0;i<s.size();i++){
        if(isOperator(s[i])){
            while(isOperator(stk.top()) && preceDence(stk.top())>=preceDence(s[i])){
                postfix+=stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
       else if(s[i]==')'){
            while(stk.top()!='('){
                postfix+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
            postfix+=s[i];
    }

    cout<<postfix<<endl;

}
