#include <iostream>
using namespace std;

void input(int a[], int &size_a){
	cin>>size_a;
	for(int i=0; i<size_a; i++){
		cin>>a[i];
	}

}
void output(int a[], int &size_a){
	for(int i=0; i<size_a; i++){
		cout<<a[i]<<"  ";
	}
	cout<<"\n\n";

}

int biggest(int a[], int size_a){
	int temp=a[0];
	for (int i = 1; i < size_a; i++)
	{
		 a[i] > temp ? temp=a[i] : temp ;
	}
	return temp;
}

void del_maxes(int a[], int &size_a, int x){
	int i=0;
	while ( i < size_a){
		if( a[i] == x ){
			size_a--;	
			for(int k=i; k<size_a; k++)
			{
				a[k] = a[k+1];
			}
		}
		else
			i++;
	}
}
int main(){
	int arr[100], n;
	input(arr ,n);
	int x=biggest(arr, n);
	del_maxes(arr, n, x);
	output(arr, n);

}
