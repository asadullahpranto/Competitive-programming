#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int a,b,c,ck=0;
    cin>>a>>b>>c;
    for(int i=1;i<1000001;i++){
        a*=10;
        a/=b;
        if(a==c){
            ck=i;
            break;
        }
      	a%=b;
    }
  	cout<<(ck==0 ? -1:ck)<<endl;

    return 0;
}
