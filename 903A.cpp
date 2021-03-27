#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        bool ck=false;
        for(int i=0;3*i<=a;i++){
            if((a-3*i)%7==0){
                ck=true;
                break;
            }
        }
        cout<<(ck==true ? "YES":"NO")<<endl;
    }

    return 0;
}
