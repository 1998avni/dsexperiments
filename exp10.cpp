#include<iostream>
using namespace std;
void merge(int a[],int low,int high,int mid)
{
  int i,j,k;
  int c[30];
  i=low;
  j=mid+1;
  k=0;
  while((i<=mid) && (j>=high)) 
  {
  	if(a[i]<a[j])
  	
  		c[k]=a[i++];
  	else
	  c[k]=a[j++];
	  	k++;
	  }
	while(i<=mid)
	{
		c[k++]=a[i++];
	  } 
	  while(j<=high)
	  {
	  	c[k++]=a[j++];
	   } 
	   for(i=low,j=0;i<=high;i++,j++)
	   {
	   	a[i]=c[j];
	   }
	   for(i=0;i<high;i++)
	   {
	   	cout<<a[i]<<endl;
	   }
	   
	  
	  	
}
 void mergesort(int a[],int l,int h)
 {
 	int mid;
 	if(l<h)
 	{
 		mid=(l+h)/2;
 		mergesort(a,l,mid);
 		mergesort(a,mid+1,h);
	 
	 merge(a,l,h,mid);
}
 }
 int main()
 {
 	int l=0;
 	int h,i,a[20];
 	cin>>h;
 	for(i=0;i<h;i++)
 	{
 	cin>>a[i];	
	}
	mergesort(a,l,h-1);
	return 0;
 }
