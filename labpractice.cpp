#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][2]={{0,1},{2,3},{0,1},{2,3}};
    string s;

    cout<<"Enter the string: ";
    cin>>s;

    int cur=0;

    for(auto x:s){
        int y = x-'0';
        cur= arr[cur][y];
    }

    if(cur)
        cout<<"Not accepted"<<endl;
    else
        cout<<"Accepted"<<endl;

    return 0;
}
