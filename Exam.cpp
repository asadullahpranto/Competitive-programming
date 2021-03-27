/// ASADULLAH PRANTO   ID: 2015331528

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v;

    cin>>n;
    if(n<=2)
        cout<<1<<endl<<1<<endl;
    else if(n==3)
        cout<<2<<endl<<"1 3"<<endl;
    else{
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            if(i%2==0)
                cout<<i<<" ";
            else
                v.push_back(i);
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}
