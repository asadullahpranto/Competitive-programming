#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define forn for(int i=0;i<n;i++)
using namespace std;

int main()
{
    bool flag=false;
    int n;
    string s[1005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(flag==false){
            if(s[i][0]=='O' && s[i][1]=='O'){
                s[i][0]=s[i][1]='+';
                flag=true;
            }
            else if(s[i][3]=='O' && s[i][4]=='O'){
                s[i][3]=s[i][4]='+';
                flag=true;
            }
        }
    }
    if(!flag)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<s[i]<<endl;
    }

    return 0;
}
