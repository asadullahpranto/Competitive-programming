#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool ck=false;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0)
                cout<<"#";
            else if(!ck){
                if(j!=m-1)
                    cout<<".";
                else{
                    cout<<"#";
                    ck=true;
                }
            }
            else{
                if(j==0)
                    cout<<"#";
                else if(j!=m-1)
                    cout<<".";
                else{
                    cout<<".";
                    ck=false;
                }
            }
//            else if(ck=true && j==0)
//                cout<<"#";
//            else if(ck=true && j==m-1)
//                ck=false;
        }
        cout<<endl;
    }

    return 0;
}
