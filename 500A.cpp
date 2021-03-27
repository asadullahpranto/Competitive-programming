#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,disti;
    cin>>n>>disti;

    int cells[n];
    for(int i=1;i<n;i++)
        cin>>cells[i];

    int ckDisti=1;

    while(ckDisti!=disti){
        ckDisti+=cells[ckDisti];
        if(ckDisti>disti)
            break;
    }

    if(ckDisti==disti)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
