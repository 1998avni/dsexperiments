#include<iostream>
using namespace std;
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;

void create();
void display();
void insert();
void del();
void search();

int main()
{
        int choice;
        do{
                
                cout<<"1.Create\n";
                cout<<"2.Display\n";
                cout<<"3.Insert\n";
                cout<<"4.Delete\n";
                cout<<"5.Search\n";
            
                
                cout<<"8.Exit\n";
                
                cout<<"\nEnter your choice:\t";
                cin>>choice;
                switch(choice)
                {
                        case 1:         
                        create();
                        break;
                        case 2:
                        display();
                        break;
						case 3:
						insert();
						break;
						case 4:
						del();
						break;
						case 5:
						search();	
						break;
					}
				}while(choice!=8);
			}
void create()					
{
        cout<<"\nEnter the size of the array elements:\t";
        cin>>n;
        cout<<"\nEnter the elements for the array:\n";
        for(i=0;i<n;i++)
        {
                cin>>a[i];
        }
}
void display()  
{
        int i;
        cout<<"\nThe array elements are:\n";
        for(i=0;i<n;i++){
                 cout<<a[i]<<endl;        
         }
 } 
void insert()     
{         
    cout<<"\nEnter the position for the new element:\t";         
    cin>>pos;        
    cout<<"\nEnter the element to be inserted :\t";         
    cin>>val;         
    for(i=n-1;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=val;
        n=n+1;
}
 
 
void del()      
{
        cout<<"\nEnter the position of the element to be deleted:\t";
        cin>>pos;
        val=a[pos];
        for(i=pos;i<n-1;i++)
        {
                a[i]=a[i+1];
        }
        n=n-1;
        cout<<"\nThe deleted element is"<<val;
}
void search()   
{
        cout<<"\nEnter the element to be searched:\t";
        cin>>key;
        for(i=0;i<n;i++)
        {
                if(a[i]==key)
                {
                        cout<<"\nThe element is present at position"<<i;
                        break;
                }
        }
        if(i==n)
        {
                cout<<"\nThe search is unsuccessful";
        }
}

