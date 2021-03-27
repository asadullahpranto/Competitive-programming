#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    string s,t;
    string s1="312831303130313130313031312831303130313130313031312831303130313130313031";
    string s2="312931303130313130313031312831303130313130313031312831303130313130313031";
    string s3="312831303130313130313031312931303130313130313031312831303130313130313031";
    string s4="312831303130313130313031312831303130313130313031312931303130313130313031";
    int n;
    cin>>n;
    while(n--){
        cin>>t;
        s+=t;
    }
    if(s1.find(s)!=-1 || s2.find(s)!=-1 || s3.find(s)!=-1 || s4.find(s)!=-1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
