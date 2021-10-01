#include<iostream>
using namespace std;
int main ()
{
	int a[10],n;
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]<0)
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<"the elements are "<<a[i]<<endl;
	}
	return 0;
}
