#include<bits/stdc++.h>
using namespace std;

int ox[]={-1, 0, 1, 0};
int oy[]={0, 1, 0, -1};

int main()
{

    int r,c;
    cin>>r>>c;

    char cell[r+2][c+2];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>cell[i][j];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            if(cell[i][j]=='.')
                cell[i][j]='D';
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(cell[i][j]=='W'){
                for(int k=0;k<4;k++){
                    int x=i+ox[k];
                    int y=j+oy[k];
                    if(x>=0 && x<r && y>=0 && y<c){
                        if(cell[x][y]=='S'){
                            cout<<"No"<<endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout<<"Yes"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<cell[i][j];
        cout<<endl;
    }


    return 0;
}
