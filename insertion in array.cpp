#include<iostream>
using namespace std;
int main ()
{
	int array[10];
	int size;
	int new_element;
	cout<<"enter the size of an array"<<endl;
	cin>>size;
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	cout<<"enter the element you want to insert in the array in sorted way"<<endl;
	cin>>new_element;
	for(int i=0;i<size;i++)
	{
		if(new_element<=array[i])
		{
			for(int j=size;j>=i;j--)
			{
				array[j+1]=array[j];
			}
			array[i]=new_element;
			break;
		}
		else
		{
			array[size]=new_element;
		}
	}
	cout<<endl<<"array after insertion"<<endl;
	for(int i=0;i<size+1;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
