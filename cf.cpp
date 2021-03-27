#include<bits/stdc++.h>
using namespace std;

struct node
{
    int a,b;
};
bool com(node x,node y)
{
    return x.a<y.a;
}
int main()
{
    vector<node>v;
    vector<node>::iterator it;
    int n,a;
    cin>>n;
    int ara[n],comu[n]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end(),com);

    string s;
    cin>>s;
    int x=-1,y=0;
    it =v.begin();
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            x++;
            it++;
            cout<<v[x].b<<" ";
            //v[x].a--;
            y=x;
        }
        else{
            cout<<*(it.b)<<" ";
            v.erase(it);
        }
    }

	return 0;
}
