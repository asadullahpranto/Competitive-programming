#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;

  	int mis=max((3*a)/10, a-(a/250)*c);
  	int vas=max((3*b)/10, b-(b/250)*d);

  	if(vas>mis)
      	cout<<"Vasya"<<endl;
  	else if(vas==mis)
      	cout<<"Tie"<<endl;
  	else
      	cout<<"Misha"<<endl;
}
