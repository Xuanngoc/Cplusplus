#ifndef SINHVIEN_H
#define SINHVIEN_H


#include <string>
using namespace std;
#include "MonHoc.h"
#include "Date.h"
#define MAX 10

class SinhVien
{
protected:
	int MaSV=10000;
	string HoVaTenDem;
	string Ten;
	string email;
	string SoDT;
	//
	MonHoc DSMon[MAX];
	int SoMon=0;
	Date NgayDK[MAX];
	int TongSoTinChi=0;

public:
	SinhVien(): MaSV(MaSV++){}
	SinhVien(string a, string b, string c, string d)
		: MaSV( MaSV++), HoVaTenDem(a), Ten(b), email(c), SoDT(d){}

	int getTongSoTinChi(){
		return this -> TongSoTinChi;
	}
	void setMaSV(int a){
		this -> MaSV = a;
	}
	int getMaSV(){
		return this-> MaSV;
	}
	string getTen(){
		return this -> Ten;
	}
	void setTen(string a){
		this-> Ten = a;
	}
	void ThemMonHoc1(MonHoc a){
		this -> DSMon[SoMon++] = a;
	}
	void setNgayDK(Date a){
		this-> NgayDK[SoMon] = a;
	}
	int getTongSoMon(){
		return this -> SoMon;
	}
	MonHoc getMonHoc(int MaMH){
		for(int i=0 ;i<SoMon; i++){
			if(DSMon[i].getMa() == MaMH){
				return DSMon[i];
			}
		}
	}



	~SinhVien();

	
};

#endif