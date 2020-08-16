#include <stdio.h>
#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int n,m,l=0,h=0, key; int a[20];
	cout<<"\nEnter the size of the array: ";
	cin>>n;
	cout<<n;
	h=n-1;
	for (int i=0; i<n; i++)
	{
		cout<<"\nEnter"<<i+1<<"-th number: ";
		cin>>a[i];
	}
	cout<<"\nEnter number to be searched: ";
	cin>>key;
	while(l<h)
	{
		m=(l+h)/2;
		if(a[m]==key)
		{
			cout<<"\nNumber is found";
			break;
		}
		else if(a[m]>key)
			h=m-1;
		else
			l=m+1;
	}
	if (l>h)
		cout<<"\nNumber not found";

	getch();
}