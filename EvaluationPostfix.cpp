#include<bits/stdc++.h>
using namespace std;

stack<int>stk;

int charTOstring(char c)
{
    return c-'0';
}

void work(char c)
{
    int a=stk.top();
    stk.pop();
    int b=stk.top();
    stk.pop();

    int result;

    switch(c)
    {
        case '+':
            result=b+a;
            break;
        case '-':
            result=b-a;
            break;
        case '*':
            result=b*a;
            break;
        case '/':
            result=b/a;
            break;
        case '%':
            result=b%a;
            break;
        case '^':
            result=pow(b,a);
            break;

    }
    stk.push(result);
}

int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            int x=charTOstring(s[i]);
            stk.push(x);
        }
        else
            work(s[i]);
    }

    cout<<stk.top()<<endl;

}
