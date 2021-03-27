#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,sum1=0,sum2=0,cnt=0;
    map<int,int>mp1,mp2;
    vector<int>v1,v2;
    cin>>n>>m;

    while(n--){
        cin>>x;
        v1.push_back(x);
    }
    while(m--){
        cin>>x;
        v2.push_back(x);
    }

    for(int i=0,j=0;i<v1.size(),j<v2.size();){
        if(mp1[i]==0){
            sum1+=v1[i];
            mp1[i]=1;
            //cout<<i<<" i"<<sum1<<endl;
        }
        if(mp2[j]==0){
            sum2+=v2[j];
            mp2[j]=1;
            //cout<<j<<" j"<<sum2<<endl;
        }
        if(sum1==sum2){
            cnt++;
            sum1=0;
            sum2=0;
            i++,j++;
        }
        else if(sum1<sum2)
            i++;
        else
            j++;
    }
    cout<<cnt<<endl;

    return 0;
}
