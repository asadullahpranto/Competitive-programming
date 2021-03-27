/// ASADULLAH PRANTO    ID: 2015331528

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    bool ck=false;

    for(int i=a.size()-1;i>=0;i--){
        while(a[i]<'z'){
            a[i]++;
            if(a<b){
                ck=true;
                cout<<a<<endl;
                break;
            }
        }
        if(ck)
            break;
        else
            a[i]='a';
    }

    if(!ck)
        cout<<"No such string"<<endl;

    return 0;
}
