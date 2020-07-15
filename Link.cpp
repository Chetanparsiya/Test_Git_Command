#include<iostream>
using namespace std;
int cnt=0;
struct node{
	int data;
	node *next;
};node *newnode,*start=NULL,*temp,*current;
void CreateNode(int data)
{	cnt++;
	newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
}
void FirstNode(int data)
{	cout<<"List Empty";
	CreateNode(data);
	start=newnode;
	current=newnode;
}
void InsertFirst(int data)
{	cout<<"Insert At First";
	CreateNode(data);
	newnode->next=start;
	start=newnode;
}
void InsertLast(int data)
{
	CreateNode(data);
	current->next=newnode;
	current=newnode;
}
void InsertPosition(int data,int pos)
{	temp=start;
	if(pos==1)
	InsertFirst(data);
	else if(pos==cnt+1)
	InsertLast(data);
	else{
	for(int i=0;i<pos-2;i++)
	{
		temp=temp->next;
	}
	CreateNode(data);
	newnode->next=temp->next;
	temp->next=newnode;
	}
}
void Display()
{
temp=start;
cout<<"\nData Part : ";

while(temp!=NULL)
{
	cout<<temp->data<<" ";
	temp=temp->next;
}
}
void DeleteFirst()
{	cnt--;
	start=start->next;
}
void DeleteLast()
{	temp=start;
	cnt--;
	while(temp->next!=current) temp=temp->next;
	temp->next=NULL;
	current=temp;
}
void DeletePosition(int pos)
{	
cout<<"Count : "<<cnt<<endl;
	if(pos==1) DeleteFirst();
	else if(pos==cnt)DeleteLast();
	else{
		temp=start;
		for(int i=0;i<pos-2;i++)
		temp=temp->next;
		temp->next=temp->next->next;
	}
	cnt--;
}
int main()
{	int  ch,data,ch1,ch2;
	do
	{
		cout<<"1.Insertion\t2.Deletion\t3.Display\nEnter the Choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
		{	
		cout<<"Enter the Data : ";
		cin>>data;
		if(start==NULL)
		FirstNode(data);
		else{
			
		cout<<"1.First Position\t2.Position\t3.Last Position\nEnter the Choicce: ";
		cin>>ch1;
		if(ch1==1)
		InsertFirst(data);
		else if(ch1==2)
		{	
		int pos;
		cout<<"Enter the Position : ";
		cin>>pos;
		InsertPosition(data,pos);
		}
		else if(ch1==3)
		InsertLast(data);
		}
		Display();
		break;
		}
		case 2:
			{
		cout<<"1.Delete First\t2.Delete Position\t3.Delete Last\nEnter the Choicce: ";
		cin>>ch1;
		if(ch1==1)
		DeleteFirst();
		else if(ch1==2)
		{	
		int pos;
		cout<<"Enter the Position : ";
		cin>>pos;
		DeletePosition(pos);
		
		}
		else if(ch1==3)
		DeleteLast();
		}	
		
		case 3:
			Display();
	}
	
	cout<<"\nDo you want more operation : ";
	cin>>ch2;
	}while(ch2==1);
	
}
