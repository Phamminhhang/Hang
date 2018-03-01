#include <iostream>
using namespace std;
int main()
{
	int n,vitri=0;
	int array[100];
	cout<<"nhap so phan tu: ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"so thu "<<i+1<<" ";
		cin>>array[i];
	}
	for (int i=0; i<n;i++)
	{	
		cout<<array[i]<<" "<<endl;
	}
	int max = array[0];
	for(int i=1;i<n;i++)
	{
		if (max < array[i])
		{
			max=array[i];
		}
	}
	cout<<"max is "<<max<<endl;
	for(int i=0;i<n;i++)
	{
		if (array[i]==max)
		{
			vitri=i+1;
			cout<<"vi tri cua max la: "<<vitri<<endl;
		}
	}
	return 0;
}