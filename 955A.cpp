#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define forn for(int i=0;i<n;i++)
using namespace std;

int main()
{
    double h,m,hung,d,c,n;
    cin>>h>>m>>hung>>d>>c>>n;
    if(h>=20){
        double a=ceil((hung)/n);
        double x=a*c-(a*c*.2);
        cout<<fixed<<setprecision(4)<<x<<endl;
    }
    else{
        double a=ceil((hung)/n);
        double x=a*c;
        double minute=0;
        while(h<20){
            minute++;
            m++;
            if(m==60){
                h++;
                m=0;
            }
            //cout<<h<<" "<<m<<endl;
        }
        //cout<<minute<<endl;
        a=ceil((hung+(minute*d))/n);
        //cout<<minute<<endl;
        double y=a*c-(a*c*.2);

        cout<<fixed<<setprecision(4)<<min(x,y)<<endl;
    }



    return 0;
}
