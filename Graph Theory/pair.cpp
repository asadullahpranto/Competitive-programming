#include<bits/stdc++.h>
using namespace std;

int mat[100][100];
int main()
{
    string s;
    vector<int>v;

    while(getline(cin, s)){
        stringstream ss(s);
        int num;

        while(ss>>num) v.push_back(num);
        sort(v.begin(), v.end());

        for(int i = 0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
//    set<int>s;
//    set<int>::iterator it;
//
//    s.insert(20);
//    s.insert(39);
//    s.insert(45);
//
//    for(it = s.begin(); it!=s.end(); it++){
//        cout<<*it<<endl;
//    }

    return 0;
}
