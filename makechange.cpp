#include<iostream>
#include<stdlib.h>

using namespace std;

void coin(int c_value[],int n,int amount)
{
	for(int i=0;i<n;i++)
	{
	while(amount>=c_value[i])
		{
		amount=amount-c_value[i];
		cout<<c_value[i];
		}
		cout<<"\n";
	}
}

int cmp(const void* a,const void* b)
	{
	return(*(int*)b-*(int*)a);
	}

int main()
{
	int i,j,n,amount;
	cout<<"\n"<<"Enter amount to be paid:";
	cin>>amount;
	cout<<"\n"<<"Enter total kinds of currency:";
	cin>>n;
	int c_value[n];
	cout<<"\n"<<"Enter all currency values:";
	for(i=0;i<n;i++)
	{
	cin>>c_value[i];
	qsort(c_value,n,sizeof(int),cmp);
	cout<<"\n"<<"The selected currency values are:";
	coin(c_value,n,amount);
	}
	return 0;
}
	

