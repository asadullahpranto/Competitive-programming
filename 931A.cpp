#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,lazy=0;
    cin>>a>>b;

    if(a>b)
        swap(a,b);

    if(b-a==1)
        cout<<1<<endl;

    else{
        for(int i=1;a!=b;i++){
            lazy+=i;
            lazy+=i;

            a+=1;
            b-=1;

            if(a==b-1){
                lazy+=(i+1);
                break;
            }
        }
        cout<<lazy<<endl;
    }
    return 0;
}
