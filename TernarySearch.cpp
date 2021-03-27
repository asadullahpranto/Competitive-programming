#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long int
#define ld long double
#define ull unsigned long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        string s;
        int n;
        cin>>n;
        getchar();

        while(n--){
            getline(cin,s);

            for(int j=0;j<s.size();j++){
                if(s[j]==' ' && s[j+1]==' ')
                    continue;
                else
                    cout<<s[j];

            }
        }
    }


    return 0;
}
