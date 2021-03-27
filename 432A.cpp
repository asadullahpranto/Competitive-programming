#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int contestant[n];

    for(int i=0;i<n;i++)
        cin>>contestant[i];

    sort(contestant,contestant+n);

    for(int i=0;i<n;i+=3){
        if(contestant[i+2]==0 && k<=5)
            cnt++;
        else if(contestant[i+2]<=1 && k<=4)
            cnt++;
        else if(contestant[i+2]<=2 && k<=3)
            cnt++;
        else if(contestant[i+2]<=3 && k<=2)
            cnt++;
        else if(contestant[i+2]<=4 && k<=1)
            cnt++;

    }

    cout<<cnt<<endl;

    return 0;
}
