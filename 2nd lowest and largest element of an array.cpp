#include<iostream>
using namespace std;
int main()
{
	int array[100];
	int size, max, max2;
	cout<<"enter the size of an array "<<endl;
	cin>>size;
	cout<<"enter the elements of array"<<endl;
	//taking input in array
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	//displayinng array 
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"  ";
	}
	//searching 2nd max element in array
	max=array[0];
	for(int i =1;i<size; i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
	}
	cout<<endl<<"second largest element of an array is : "<<max<<endl;
	return 0;
}
