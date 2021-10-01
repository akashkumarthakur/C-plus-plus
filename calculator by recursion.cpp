#include<iostream>
using namespace std;
int calc(void)
{
	char ch,operation,ab;
	int a,b;
		cout<<"enter the expression"<<endl;
		cin>>a>>operation>>b;
		switch(operation)
		{
			case '+': cout<<a+b<<endl;
			break;
			case '-': cout<<a-b<<endl;
			break;
			case '*': cout<<a*b<<endl;
			break;
			case '/': cout<<a/b<<endl;
			break;
			case '%': cout<<a%b<<endl;
			break;	 
		}
		cout<<"press y to continue and n to cancel"<<endl;
		cin>>ch;
		if(ch == 'y')
		{
			calc();
		}
		else
		return 0;
}
int main()
{
	calc();
	return 0;
}
