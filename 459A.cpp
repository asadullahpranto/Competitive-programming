#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        int x=abs(y1-y2);
        cout<<x1+x<<" "<<y1<<" "<<x2+x<<" "<<y2<<endl;
    }
    else if(y1==y2){
        int y=abs(x1-x2);
        cout<<x1<<" "<<y1+y<<" "<<x2<<" "<<y2+y<<endl;
    }
    else if(x1==y2 && x2==y1)
        cout<<x1<<" "<<x1<<" "<<y1<<" "<<y1<<endl;
    else if(abs(x1-x2)==abs(y1-y2))
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    else
        cout<<-1<<endl;


    return 0;
}
