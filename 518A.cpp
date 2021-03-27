#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    for(int i=a.size()-1;i>=0;i--){
        while(a[i]<'z'){
            a[i]++;
            if(a<b){
                cout<<a<<endl;
                return 0;
            }
        }
        a[i]='a';
    }
    cout<<"No such string"<<endl;

    return 0;
}
