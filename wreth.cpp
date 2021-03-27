#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,t,cnt=0;
    vector<int>clw;
    vector<int>kill;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        clw.push_back(t);
    }
    for(int i=clw.size()-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(j>=i-clw[i])
                clw.erase(clw.begin()+j);
        }
    }
    cout<<clw.size()<<endl;

    return 0;
}
