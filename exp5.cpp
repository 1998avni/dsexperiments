#include<iostream>
using namespace std;
#define max 100
int n;
class stack
{
	int top;
	public:int a[max];
	stack()
	{
		top=-1;
	}
	bool push(int x);
	int pop();
	int isEmpty();
	int peek();
	void show();
};
bool stack::push(int x)
{int num,sub;
	if(top>=(max-1))
	{
		cout<<"stack overflow"<<endl;
		return false;
	}
	else if(x==10)
	{
	num=pop();
	sub=x-num;
	push(sub);
	n++;	
	}
	else
	{
	a[++top]=x;
	return true;
}
	
}
int stack::pop()
{
	if(top<0)
	{
		cout<<"stack underflow"<<endl;
		return 0;
	}
else
{
	int x=a[top--];
	return x;
	}	
	
}

int stack::peek()
{
	return a[top];
}

int main()
{
	stack s;
	int num,i;
	do
	{
	cout<<"press 1 to insert an element"<<endl;
	cout<<"press 2 to pop an element"<<endl;
	cout<<"press 3 to display top element"<<endl;
	cout<<"press 8 to exit"<<endl; 
	cin>>num;
	switch(num)
	{
		case 1:
		cin>>i;
		s.push(i);
		break;
		case 2:
		s.pop();
		break;
		case 3:
		cout<<endl<<s.peek();
		break;	
	}
	}while(num!=8);
return 0;
}

