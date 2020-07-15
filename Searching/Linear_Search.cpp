#include<iostream>
using namespace std;
int Linear_Search(int a[],int item ,int n)//Linear Search Logic
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)//linearily searching items
			return i+1;//return the position of element
	}	
return 0;//return if the element is not found
}
int main()
{	int n,item;
	cout<<"Enter the Number of Element : ";//Number of Element
	cin>>n;
	int a[n];
	cout<<"Enter the Element : ";//Array element insertion
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the item to be found : ";//item is to be found
	cin>>item;
	int found=Linear_Search(a,item,n);//Function Calling for Linear Search
	if(found)		//position is return if element is found
	cout<<"Element is Found at Positon : "<<found;
	else	//0 hence false condition is return if element isn't found
	cout<<"Element is not Found...!";
}
