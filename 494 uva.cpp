#include<iostream>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s)){
        int cnt=0;
        bool ck=true;
        for(int i=0;i<s.size();i++){
            if(towlower(s[i])>='a' && tolower(s[i])<='z'){
                if(ck)
                    cnt++;
                ck=false;
            }
            else
                ck=true;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
