#include<iostream>
using namespace std;
int a[30],n;
void bin_search();
int main()
{
	int i,j,temp;
	
	cout<<"enter the size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-(i+1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	bin_search();
	return 0;
}


void bin_search()
{
	
	int search, first, last, middle;
	
	cout<<"Enter a number to find :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(a[middle] < search)
		{
			first = middle + 1;

		}
		else if(a[middle] == search)
		{
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
}
	
