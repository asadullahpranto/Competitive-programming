#include<bits/stdc++.h>
using namespace std;

struct Node
{
    string a,b;
};

int main()
{
    int m,n,t=1;
    string temp,a,b;
    while(cin>>n){
        vector<string>v1;
        vector<Node>v2,v3;
        while(n--){
            cin>>temp;
            v1.push_back(temp);
        }
        cin>>m;
        while(m--){
            cin>>b>>b;
            v2.push_back({a,b});
        }
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v1[i]==v2[j].b){
                    v3.push_back({v2[j].b,})
                }
            }
        }
    }
}
