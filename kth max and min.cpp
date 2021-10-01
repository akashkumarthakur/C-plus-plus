#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int k,n,i,j;
	
	cout<<"enter the size of array"<<endl;
	cin>>n;
	//taking array input
	cout<<"enter the array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sorting the array
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//printing the k th largest and smallest number
	cout<<"enter the value of k"<<endl;
	cin>>k;
	cout<<k<<" smallest no. is "<<a[k-1]<<endl;
	cout<<k<<" largest no. is "<<a[n-k]<<endl;
	return 0;
	
}
