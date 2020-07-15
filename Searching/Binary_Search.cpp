#include<iostream>
using namespace std;
int Binary_Search(int a[],int item ,int first,int last)//Binary Search Logic
{
	while(first<=last)
	{
		int mid=(first+last)/2;//to divide the list
		
		if(a[mid]==item)//to check the item at a index
			return mid+1;//Element is found
		else if(item<a[mid])//if item is less than it is found in left side
			last=mid-1;
		else 
			first=mid+1;//if item is more than it is found in right side
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
	int found=Binary_Search(a,item,0,n);//Function Calling for Linear Search
	if(found)		//position is return if element is found
	cout<<"Element is Found at Positon : "<<found;
	else	//0 hence false condition is return if element isn't found
	cout<<"Element is not Found...!";
}
