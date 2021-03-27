#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int link=0,pearl=0;
    for(auto c:s){
        if(c=='-')
            link++;
        else
            pearl++;
    }
    if(!pearl)
        cout<<"NO"<<endl;
    else if(link%pearl==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
