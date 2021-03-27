#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,a,b;
    scanf("%d",&n);
    stack<int>stk;
    while(n--){
        cin>>a>>b;
        if(a==1)
            stk.push(b);
        else{
            int cnt=0;
            while(!stk.empty() && stk.top()!=b){
                cnt++;
                stk.pop();
            }
            if(!stk.empty() && stk.top()==b){
                cnt++;
                stk.pop();
            }
            if(cnt==0)
                printf("Sorry\n");
            else
                printf("%d\n",cnt);
        }
    }

    return 0;
}
