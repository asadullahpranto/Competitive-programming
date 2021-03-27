#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int main()
{
    vector<int>edge[MAX], indegree[MAX], outdegree[MAX];
    vector<int>cost[MAX];

    int noNode, noEdge;
    cin>>noNode>>noEdge;

    for(int i=1; i<=noEdge; i++){
        int x, y;

        cin>>x>>y;

        edge[x].push_back(y);
        indegree[x]++;
        outdegree[y]++;
        //edge[y].push_back(x);

        cost[x].push_back(y);
        cost[y].push_back(x);
    }

    for(int j=1;j<=noNode;j++){
        cout<<j<<" -- ";
        for(int i=0; i<edge[j].size(); i++)
            cout<<edge[j][i]<<" ";
        cout<<endl;
    }





    return 0;
}
/*
6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6
*/
