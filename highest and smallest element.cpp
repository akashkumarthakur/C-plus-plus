#include<iostream>
using namespace std;
int main()
{
	int array[10],max,max2,small,small2;
	
	//taking input in array
	cout<<"enter the 10 elements in an array"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	
	//printing array in reverse order
	cout<<"array in reverse order"<<endl;
	for(int i=9;i>=0;i--)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	//printing greatest and smallest element of array
	max=small=array[0];
	for(int i=1;i<10;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
		if(array[i]<small)
		{
			small=array[i];
		}
	}
	cout<<"highest element of array is : "<<max<<endl;
	cout<<"smallest element of array is : "<<small<<endl;
	
	//printing scond largest and second smallest element of array
	max2=small2=array[0];
	for(int i=0;i<10;i++)
	{
		if(array[i]>max2 && array[i]!=max)
		{
			max2=array[i];
		}
		if(array[i]<small2 && array[i]!=small)
		{
			small2=array[i];
		}
	}
	cout<<"2nd largest element is : "<<max2<<endl;
	cout<<"2nd smallest element is : "<<small2<<endl;
	
	return 0;
}
