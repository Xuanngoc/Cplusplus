#include "sanphamSX.h"
#include <fstream>
int main()
{
	ofstream file1("file.txt");

	sanphamSX a[5];
	for(int i=0; i<=2; i++){
		cin>>a[i];

	}
	file1<<"Ma san pham    Ten san pham    Loai san pham    Gia san pham    Nam san Xuat \n";
	for(int i=0; i<=2; i++){
		file1<<a[i];
	}	

}