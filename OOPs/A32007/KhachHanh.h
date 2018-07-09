#include <iostream>
#include <string.h>
using namespace std;
#include "TaiKhoan.h"
class KhachHang
{
protected:
	string FullName;
	int TongSoTaiKHoan;
	TaiKhoan *CacTaiKhoanSoHuu[10];

public:
	
	TaiKhoan *GetTaikhoan(long int a){
		for(int i=0; i<TongSoTaiKHoan; i++){
			if(CacTaiKhoanSoHuu[i] -> getSoTaiKhoan() ==a ){
				return 	CacTaiKhoanSoHuu[i];
			}
		}
	}

	long int TongSoTien(){
		long int a=0;
		for(int i=0; i<TongSoTaiKHoan; i++){
			a+= CacTaiKhoanSoHuu[i] -> getSoDu();
		}
		return a;
	}

	void ThemTaiKhoan(){
		
	}
	
};