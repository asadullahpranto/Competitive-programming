#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,cnt=0;
    bool ck=false;
    vector<int>v1,v2;
    cin>>n>>a>>b;
    int temp=n;

    for(int i=1;i<=n;i++)
        v1.push_back(i);

    while(1){
        cnt++;
        for(int i=0;i<v1.size();i+=2){
            if((v1[i]==a && v1[i+1]==b) || (v1[i]==b && v1[i+1]==a)){
                ck=true;
                break;
            }
            else{
                if(v1[i]==a || v1[i]==b)
                    v2.push_back(v1[i]);
                else if(v1[i+1]==a || v1[i+1]==b)
                    v2.push_back(v1[i+1]);
                else
                    v2.push_back(v1[i]);
            }
        }
        if(ck)
            break;
        else{
            v1.clear();
            v1=v2;
            v2.clear();
        }
    }
    for(int i=0;i<cnt;i++){
        temp/=2;
    }
    if(temp==1)
        cout<<"Final!"<<endl;
    else
        cout<<cnt<<endl;

    return 0;
}
