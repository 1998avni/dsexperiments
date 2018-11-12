#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
	int key,i,j;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
int a[30],n,i;
 cin>>n;
 for(i=0;i<n;i++)
 {
 	cin>>a[i];
 }	
 insertion_sort(a,n);
 return 0;
}
