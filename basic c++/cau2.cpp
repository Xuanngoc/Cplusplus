#include <iostream>
using namespace std;


void input(int arr[], int &n)
{
	cout<<"Nhap so luong cac chu so ";
	cin >>n;
	for(int i=0; i<n; i++)
	{	
		int temp;
		do
		{
			cout<<"Nhap phan tu thu "<<i+1<<": ";
			cin>>temp;
			if(temp < 1)
				cout<<"Hay nhap so tu nhien !!!\n";	

		}while (temp < 1);
		arr[i]=temp;
	}	
}
void cout_(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout<<"  "<<arr[i];
}

int even_number(int arr[], int n)
{
	int counter=0;
	cout<<"Vi tri cac so chan trong day so: ";
	for(int i=0; i<n; i++)
		if(arr[i] %2 == 0 )
		{
			cout<< i<<"  ";
			counter++;
		}
	return counter;		
}

int int_max(int arr[], int n)
{
	int biggest =arr[0];
	for(int i=1; i<n; i++)
		if( biggest < arr[i])
			biggest = arr[i];
	for(int i=0; i<n; i++)
		if(arr[i] == biggest)
			cout<<i+1<<" ";	
	return biggest;	

}

int main()
{
	int arr[50];
	int n;
	input(arr, n);
	//cout_(arr, n);
	int x= even_number(arr, n);
	cout<<"Co "<<x<<"phan tu chan trong day so\n\n\n";

	// max in array
	int biggest = int_max(arr, n);
	cout<<biggest<<endl;





}