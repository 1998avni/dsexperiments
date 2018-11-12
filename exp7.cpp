#include<iostream>
# define size 5
using namespace std;
class cir_queue
{
	int front,rear;
	int q[20];
	public:
	cir_queue()
	{
		front=-1;
		rear=-1;
	}
	void enque(int x)
	{
		if((front==0 && rear==size-1) || (front==(rear+1)%(size-1)))
		cout<<"queue overflow";
		else if(front==-1)
		{
			front=0;
			rear=0;
			q[rear]=x;
		}
		else if(rear==size-1 && front!=0)
		{
			rear=0;
			q[rear]=x;
		}
		else
		q[++rear]=x;
	}
	void dequeue()
	{
		if(front==-1)
		cout<<"queue empty";
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==size-1)
		front=0;
		else
		front++;
	}
	void display()
	{int i;
		if(front==-1)
		cout<<"queue empty";
		if(rear>front)
		{
			for(i=front;i<=rear;i++)
			{
				cout<<q[i];
			}
		}
		else
		{
			for(i=front;i<=size;i++)
			{
			cout<<q[i]<<endl;
		}
		for(i=0;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
	
}
};
int main()
{int n,i,num;
do
{
	cout<<"press 1 to insert an element"<<endl;
	cout<<"press 2 to display an element"<<endl;
	cout<<"press 3 to display queue"<<endl;
	cout<<"press 8 to exit"<<endl;
	cout<<"enter your choice"<<endl;
	cir_queue cq;
	
	cin>>n;
	switch(n)
	{
	case 1:
		cin>>num;
		cq.enque(num);
		break;
	case 2:
	 cq.dequeue();
	 break;
	 case 3:
	 cq.display();
	 break;	
}
}while(n!=8);
	return 0;
}
