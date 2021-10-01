#include<iostream>
using namespace std;
int main()
{
	char ch,operation,ab;
	int a,b;
		
	do{
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
			default: cout<<"wrong input";
			break;	 
		}
		cout<<"press yes to continue and no to cancel"<<endl;
		cin>>ch;
	}
	while(ch == 'y');
	return 0;
}

