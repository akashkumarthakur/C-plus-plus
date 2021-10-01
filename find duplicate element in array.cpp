#include<iostream>
using namespace std;
int main ()
{
	int a[10];
	int n;
	cout<<"enter number of element"<<endl;
	cin>>n;
	cout<<"enterr element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"duplicate elements are "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cout<<a[i]<<"  ";
			}
		}
	}
	return 0;
}
