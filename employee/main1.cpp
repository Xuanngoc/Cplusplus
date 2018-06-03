#include "Employee.h"
#include <fstream>

int main(){
	Employee a[10];
	ofstream file1("emp.txt");
	int n; cin >>n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	file1<<"Ho ten\t\t Nam sinh \t\t luong\t\t Don vi cong tac\n";
	for(int i=0; i<n; i++){
		file1<<a[i];
	}
	file1.close();
}