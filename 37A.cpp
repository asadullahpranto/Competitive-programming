#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,cnt=1,total=1,mx=1;
    cin>>n;
    int bars[n],height[n];
    for(int i=0;i<n;i++)
        cin>>bars[i];

    sort(bars,bars+n);

    for(int i=0;i<n-1;i++){
        while(bars[i]==bars[i+1]){
            cnt++;
            i++;
        }
        mx=max(mx,cnt);
        cnt=1;
    }
    for(int i=0;i<n-1;i++){
        if(bars[i]!=bars[i+1])
            total++;
    }

    cout<<mx<<" "<<total<<endl;


    return 0;
}
