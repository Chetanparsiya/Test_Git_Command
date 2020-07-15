#include<iostream>
using namespace std;
int i=-1;//Global Variables

void Insert_At_Last(int a[],int data)//Inserting at Last
{	cout<<"Inserted at the last Index";
	a[++i]=data;
}
void Insert_At_Position(int a[],int data,int pos)//Inserting at  Position
{	i++;
	int j;
	
	for( j=i;j>pos;j--)
	a[j+1]=a[j];
	if(j!=-1)
	{
	a[j+1]=a[j];
	j--;
	a[j+1]=a[j];
	j--;
	}
	a[j+1]=data;
}
void Insert_At_First(int a[],int data)//Inserting at First Position
{	
	if(i==-1)
	Insert_At_Last(a,data);//Inserting at First Position
	else 
	{
		Insert_At_Position(a,data,-1);//Inserting at First Position
	}
	
}
void Delete_At_Last()//Delete At Last
{
	i--;//logical Delete
}
void Delete_At_Position(int a[],int pos)//Deleting at particular position
{	
	for(int j=pos;j<=i;j++)
	a[j-1]=a[j];//Shifting
	i--;
}
void Delete_At_First(int a[])
{	
		Delete_At_Position(a,1);//Delete the Last Position
}
	

void Display_Array(int a[])//Display Array
{	cout<<"Elements are : ";
	for(int j=0;j<=i;j++)
	cout<<a[j]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	int ch,data,ch1;
	cout<<"Enter the Number of Element : ";
	cin>>n;
	int a[n];
	do
	{	
		cout<<"1.Insertion\t2.Deletion\t3.Display\n Enter the Choice : ";
		cin>>ch;
		if(ch==1)
		{	cout<<"Enter the Data : ";
			cin>>data;
			cout<<"1.Insert At First\t2.Insert At Last\t3. Insert At Position\nEnter the Choice : ";
			cin>>ch1;
			switch(ch1)//For Insertion
			{
				case 1: 
				Insert_At_First(a,data);
				break;
				case 2:
				Insert_At_Last(a,data);
				break;
				case 3:
				{	
				int pos;
				cout<<"Enter the Position : ";
				cin>>pos;
				if(pos==1)
				Insert_At_First(a,data);
				else if(i+2==pos)
				Insert_At_Last(a,data);
				else 
				Insert_At_Position(a,data,pos);
				break;
				}
			}
			Display_Array(a);
			
		}
		else if(ch==2)//For Deletion
		{	if(i==-1)
			{
			cout<<"Delete Can't be performed";
			continue;
			}
			cout<<"1.Delete At First\t2.Delete At Last\t3.Delete At Position\nEnter the Choice : ";
			cin>>ch1;
			switch(ch1)
			{
				case 1: 
				Delete_At_First(a);
				break;
				case 2:
				Delete_At_Last();
				break;
				case 3:
				{	
				int pos;
				cout<<"Enter the Position : ";
				cin>>pos;
				if(pos==1)
				Delete_At_First(a);
				else if(pos==i)
				Delete_At_Last();
				else 
				Delete_At_Position(a,pos);
				break;
				}
				
				
			}
			Display_Array(a);
		}
		else if(ch==3)//For Display
		{
			Display_Array(a);
		}
	cout<<"Enter the Choice : ";//Press 0 to move out
	cin>>ch1;
	}while(ch1);
}
