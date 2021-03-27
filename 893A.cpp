#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,ck=0;
    bool cN=false;
    cin>>n;
    int log[n];
    for(int i=0;i<n;i++)
        cin>>log[i];

    if(log[0]==3 || log[1]==3)
        cout<<"NO"<<endl;
    else{
        ck=log[0]==1 ? 2:1;
        for(int i=1;i<n;i++){
            if(log[i]==ck){
                cN=true;
                break;
            }
            else if(ck==1)
                ck=3;
            else
                ck=1;
        }
        if(cN)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


    return 0;
}
