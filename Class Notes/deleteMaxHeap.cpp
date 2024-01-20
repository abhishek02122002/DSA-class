// Max heap

#include<iostream>
using namespace std;
void maxheap(int a[],int k,int n)
{
	int val=a[k];
	int j=2*k+1;
	while(j<n)
	{
		if(a[j+1]>a[j])
		j=j+1;
		if(val>a[j])
		break;
		else
		{
			a[(j-1)/2]=a[j];
			j=2*j+1;
		}
	}
	a[(j-1)/2]=val;
}	
void build_heap(int a[], int n)
{
	int k;
	for(k=(n/2)-1;k>=0;k--)
	{
		maxheap(a,k,n);
	}
}
void hipify(int a[],int n,int index)
{
	int largeindex=index;
	int L=2*index+1;
	int R=2*index+2;
	if(L<n && a[L]>a[largeindex])
	{
		largeindex=L;
	}
	if(R<n && a[R]>a[largeindex])
	{
		largeindex=R;
	}
	if(largeindex!=index)
	{
		swap(a[largeindex],a[index]);
		hipify(a,n,largeindex);
	}
}
void deleteheap(int a[],int n,int no)
{
	int index;
	for(int i=0;i<n;i++)
	{
		if(a[i]==no)
		{
			index=i;
			break;
	    }
    }
    a[index]=a[n-1];
    hipify(a,n,index);
}
    
int main()
{
	int a[30],n;
	cout<<"How many nodes u want to create: ";
	cin>>n;
	cout<<"Enter all ekements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	build_heap(a,n);
	cout<<"Max heap is: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	int no;
	cout<<"\nEnter the number you want to delete: ";
	cin>>no;
	deleteheap(a,n,no);
	cout<<"\nThe Maxheap After deletion: ";
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}