#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1e6+7
using namespace std;

int mat[1234][1234];
int main()
{
    string a,b;
    while(getline(cin,a)){
        getline(cin,b);

        for(int i=0;i<=a.size();i++){
            for(int j=0;j<=b.size();j++){
                if(i==0 || j==0)
                    mat[i][j]=0;
                else if(a[i-1]==b[j-1])
                    mat[i][j]=mat[i-1][j-1]+1;
                else
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
        cout<<mat[a.size()][b.size()]<<endl;
    }

    return 0;
}
