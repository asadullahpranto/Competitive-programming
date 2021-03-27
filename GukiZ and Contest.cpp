///             ASADULLAH PRANTO
///               ID: 2015331528

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int>v;

    cin>>n;
    while(n--){
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++){
        int cnt=1;
        for(int j=0;j<v.size();j++){
            if(v[i]<v[j])
                cnt++;
        }
        cout<<cnt<<" ";
    }
    cout<<endl;


    return 0;
}

