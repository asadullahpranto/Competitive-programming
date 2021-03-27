#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int arr[5]={5,3,6,7,8};
    list<int>myList(arr,arr+5);
    list<int>::iterator it;




    myList.push_back(10);
    myList.push_back(12);
    myList.push_back(5);

    /// 5 3 6 7 8 10 12 5

    myList.reverse();

    cout<<"List Size: "<<myList.size()<<endl;

    for(it=myList.begin(); it!=myList.end();it++)
        cout<<*it<<" ";
    cout<<endl;


    return 0;
}
