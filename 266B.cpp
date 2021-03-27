#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<iomanip>
#define M 1e9+7
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;

    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}
