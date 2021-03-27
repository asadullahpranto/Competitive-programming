#include<bits/stdc++.h>
using namespace std;

char mp[100][100];
int found = 0, row, col;

void check(int i, int j){
    if(i < 0 || j < 0 || i >= row || j >= col)
        return;
    else if(mp[i][j] == 'B')
        found = 1;
    else if(mp[i][j] == 'X')
        return;
    else{
        check(i-1, j);
        check(i+1, j);
        check(i, j-1);
        check(i, j+1);
    }
}
int main()
{
    cin>>row>>col;

    for(int i=0;i<row; i++)
        cin>>mp[i];

    check(0, 0);

    if(found)
        cout<<"You can reach"<<endl;
    else
        cout<<"You can't reach"<<endl;

    return 0;
}
