#include<iostream>
using namespace std;
int main()
{
	int count=0;
	int a[10],b[10],c[20], n;
	cout<<"enter no. of elements"<<endl;
	cin>>n;
	cout<<"enter the elements of A"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the elements of B"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<"elements of A"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"elements of B"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl<<"intersection of array"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<" ";
			}
		}
	}
	cout<<endl<<"union of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
			else
				cout<<b[j]<<" ";
		}
	}
	
	return 0;
}
