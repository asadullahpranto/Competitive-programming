#include<bits/stdc++.h>
#define diag 1
#define up 2
#define left 3
using namespace std;

int main()
{
    string a,b,lcs;
    cin>>a>>b;
    int x=a.size(),y=b.size();
    int mat[x+1][y+1],trace[x+1][y+1];

    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            if(i==0 || j==0)
                mat[i][j]=0;
            else if(a[i-1]==b[j-1]){
                mat[i][j]=mat[i-1][j-1]+1;
                trace[i][j]=diag;
            }
            else{
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);

                if(mat[i-1][j]>mat[i][j-1])
                    trace[i][j]=up;
                else
                    trace[i][j]=left;
            }
        }
    }
    while(x>0 && y>0){
        if(trace[x][y]==diag){
            lcs+=a[x-1];
            x--;
            y--;
        }
        else if(trace[x][y]==up)
            x--;
        else
            y--;
    }
    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<endl;
    cout<<mat[a.size()][b.size()]<<endl;

    return 0;
}
