#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"enter value of n"<<endl;
	cin>>n;
	cout<<"enter  the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp=a[0];
	for(int i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	a[n-1]=temp;
	
	cout<<"after cyclic moving array by one "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
