#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int count0=0;
	int count1=0;
	int count2=0;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	cout<<"enter elements only 0,1,2"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			count0++;
		}
		else if(a[i]==1)
		{
			count1++;
		}
		else if(a[i]==2)
		{
			count2++;
		}
	}
	for(int i=0;i<count0;i++)
	{
		a[i]=0;
	}
	for(int i=count0;i<count0+count1;i++)
	{
		a[i]=1;
	}
	for(int i=count0+count1;i<count0+count1+count2;i++)
	{
		a[i]=2;
	}
	cout<<"sorted array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
	return 0;
}
