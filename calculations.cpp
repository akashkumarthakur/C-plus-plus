#include<iostream>
using namespace std;
int calc(void)
{
	char ch[10];
	char operation,ab;
	int a,b,res;
		cout<<"enter the expression";
		cin>>a;
		cin>>operation;
		cin>>b;
		switch(operation)
		{
			case '+': cout<<a+b;
			break;
			case '-': cout<<a-b;
			break;
			case '*': cout<<a*b;
			break;
			case '/': cout<<a/b;
			break;
			case '%': cout<<a%b;
			break;	 
		}
		cout<<"press y to continue and n to cancel";
		cin>>ch;
		if(ch == "yes")
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
