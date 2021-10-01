#include<iostream>
using namespace std;
int main()
{
	int a,b,c,max;
	cout<<"enter three numbers "<<endl;
	cin>>a>>b>>c;
	if(b>a && b>c)
	{
		max=b;
    }
    if(c>a && c>b)
	{
		max=c;
    }
    if(a>c && a>b)
	{
		max=a;
    }
    cout<<"greatest number is : "<<max;
    return 0;
}
