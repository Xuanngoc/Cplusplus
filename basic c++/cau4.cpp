#include <iostream>
using namespace std;

void input(int arr[], int &size){
	cin>>size;
	for(int i=0; i< size; i++)
		cin >>arr[i];
}

void output(int arr[], int &size){
	for(int i=0; i< size; i++)
		cout << arr[i]<<"  ";
		cout<<endl;
}
double average (int arr[], int size){
	int a=0;
	for(int i=0; i<size; i++)
		a+= ( arr[i] / size );
	return a;
}
void mid_zero(int arr[], int size){
	for(int i=0; i<size; i++){
		if(arr[i] == 0){
			//swap
			arr[i] = arr[i+1];
			arr[i+1] =0;
		}
		if(arr[ i+2] %2 != 0)
			break;
		
	}
}
void bsort(int arr[], int size )
{
	// find zero
	int f;
	for(int i=0; i<size; i++){
		if(arr[i] ==0){
			f=i;
			break;
		}	
	}
	//sort even number 	
	for(int i=0; i<f; i++){
		for(int k=0; k<f-1; k++){
			if(arr[k] > arr[k+1])
			{
				int temp = arr[k];
				arr[k ] = arr[k+1];
				arr[k+1] = temp;
			}	
		}		
	}
	// sort odd number
	for (int i =  f + 1; i < size; i++){
		for(int k = f + 1; k < size - 1  ; k++){
			if(arr[k] < arr[k+1]){
				int temp = arr[k];
				arr[k ] = arr[k+1];
				arr[k+1] = temp;
			}
				
		}
	}	
}

void make_it(int arr[], int size){
	int f=0;
	for(int i=0; i<size; i++){
		if( arr[i] % 2 ==0 ){
			for(int k=i; k >= 1+f; k--){
				// swap !!!
				double temp = arr[k];
				arr[k]= arr[k-1];
				arr[k-1] =temp;
			}
		f++;
		}
	}
	mid_zero(arr, size);
}

int main(){
	int arr[100], size;
	input(arr, size);
	
	make_it(arr, size);
	cout<<" Sau khi xu li : \n";
	output(arr, size);
	bsort(arr, size);
	cout<<"Sau khi sap xep :\n ";
	output(arr, size);


}
