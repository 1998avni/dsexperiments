#include<iostream>
#include<string.h>

using namespace std;
class eval;
class stack
{   	public:
	char arr[];
	int size;
	int top=-1;

	void push(char i)
	{
	 if(top==size);
	 else
	 {
	 	top++;
	 	arr[top]=i;
	 }
	}
	void pop()
	{
		if(top==-1);
		else
		top--;	
	}
	char peep()
	{
		return arr[top];
	}
	bool empty()
	{
		if(top==-1)
		return true;
		else 
		return false;
	}	
};
class eval
{
public:
void evaluate(char a[],int size)
{char c;
int l;
stack obj;
int i,j,k;
for(i=0;i<size;i++)
{c=a[i];
	if(c>='0'&&c<='9')
	{
		obj.push(c);
		cout<<c;
	}
	else
	{
		int k=obj.peep();
		k=k-48;
		obj.pop();
		cout<<k<<endl;
		int d=obj.peep();
		d=d-48;
		cout<<d<<endl;
		cout<<c<<endl;
		obj.pop();
		if(c='/')
		 l=k/d;
		else if(c='*')
		l=k*d;
		else if(c='+')
		l=k+d;
		else if(c='-')
		l=k-d;
		l=l+48;
		obj.push(l);
		
	}
}
cout<<obj.peep();
	
	}	
};
#include<iostream>
#include<string.h>
using namespace std;
class checkpar;
class stack
{   	public:
	char arr[];
	int size;
	int top=-1;

	void push(char i)
	{
	 if(top==size);
	 else
	 {
	 	top++;
	 	arr[top]=i;
	 }
	}
	void pop()
	{
		if(top==-1);
		else
		top--;	
	}
	char peep()
	{
		return arr[top];
	}
	bool empty()
	{
		if(top==-1)
		return true;
		else 
		return false;
	}	
};

class checkpar

{public:
void infix(char infix[],char pos[],int size)
    {stack obj;
	int i,j=0,k;
	char c;
	for(i=0;i<size;i++)
	{
		c=infix[i];
		if((c>='a'&&c<='z')||(c>='A'&& c<='Z'))
		{
		pos[j]=c;
	//	cout<<pos[j];
		j++;	
		}
		else if(c=='(')
		obj.push(c);
		else if(c==')')
		{
			while(obj.peep()!='(')
			{
			
			pos[j]=obj.peep();
			obj.pop();
			j++;
		}
		obj.pop();
		
			
		}
		else
		{
			bool a=percedence(c,obj);
			if(a==true)
			obj.push(c);
			else
			{
			pos[j]=obj.peep();
			j++;
			obj.pop();
			obj.push(c);
			
		}
		
		
	}
	
	}
	while(obj.top>-1)
	{
		pos[j]=obj.peep();
		obj.pop();
		j++;
		
	}
	cout<<pos;
}
bool percedence(char g,stack obj)
{
	if(g=='+')
	{
		if(obj.peep()=='-'||obj.peep()=='(' )
		return true;
		else
		return false;
	}
		else if(g=='-')
	{
		if(obj.peep()=='(' )
		return true;
		else
		return false;
	}
		else if(g=='/')
	{
		if(obj.peep()=='-'||obj.peep()=='('||obj.peep()=='+' )
		return true;
		else
		return false;
	}
		else if(g=='*')
	{
		if(obj.peep()=='-'||obj.peep()=='('||obj.peep()=='+'||obj.peep()=='%' )
		return true;
		else
		return false;
	}
	else 
	return true;
	
	
}
};
int main()
{
	checkpar asd;
	char infix[]="(a-b)*d/e";
	int size=strlen(infix);
	char *postfix=new char[size];
	asd.infix(infix,postfix,size);
	eval obj;
	char a[]="12+";
	int s=strlen(a);
	obj.evaluate(a,s);
}

