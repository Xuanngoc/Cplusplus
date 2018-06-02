#include <iostream>
using namespace std;

// function prototype
void input(int a[], int &size_a);
void output(int a[], int &size_a);
void mid_zero(int a[], int size_a, int f);
void make_it(int a[], int size_a);

int main()
{

	int arr[100];
	int n;
	input(arr, n);
	make_it(arr, n);
	output(arr, n);
}
// define function
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

void mid_zero(int a[], int size_a, int f)
{
	for(int i=0; i<f-2; i++){
		if(a[i] == 0 )
		{	//swap swap swap !!!!
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}	
	}
}
void make_it(int a[], int size_a)
{
	int f=1; 
	for(int i=0; i<size_a; i++){	
		if( a[i] % 2 == 0){
			for(int k=i; k>=f; k--){
				//swap swap swap !!!!
				int temp= a[k];
				a[k]= a[k-1];
				a[k-1] =temp;
			}
			f++;
		}
		//output(a, size_a);
	}
	mid_zero(a, size_a, f);
}
