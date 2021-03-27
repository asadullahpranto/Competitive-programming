#include<bits/stdc++.h>
using namespace std;


struct Node{
    string name;
    int height, weight;
    long long income;
};

bool com(Node a, Node b){
    if(a.income == b.income){
        if( a.weight == b.weight){
            if(a.weight == b.weight){
                return a.name.size() < b.name.size();
            }
            else return a.weight < b.weight;
        }
        else return a.height > b.height;
    }
    else return a.income > b.income;
}

int main()
{
    vector<Node>v;
    string name;
    int n,height, weight;
    long long income;


    cout<<"Number of input: ";
    cin>>n;
    //cout<<endl;
    cout<<"Input order: name->height->weight->income"<<endl;

    for(int i=0; i<n; i++){
        cin>>name>>height>>weight>>income;
        v.push_back({name, height, weight, income});
    }

    sort(v.begin(), v.end(), com);

    for(int i=0; i<v.size();i++){
        cout<<v[i].name<<" "<<v[i].height<<" "<<v[i].weight<<" "<<v[i].income<<endl;
    }

    return 0;
}
