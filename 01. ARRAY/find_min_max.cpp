//Find the largest and smallest number in an array.
#include<iostream>
using  namespace std;

int main()
{
	/* code */
	int n;
	cout<<"Size of an array : ";
	cin>>n;
	int a[n];
	int min,max;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	min = a[0];
	max = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];

		else if(a[i]>max)
			max = a[i];

	}
	cout<<"\n";
	cout<<"Smallest : "<<min<<" Largest : "<<max;
	return 0;
}