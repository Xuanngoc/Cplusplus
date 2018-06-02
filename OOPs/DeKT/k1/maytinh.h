#ifndef MAYTINH_H
#define MAYTINH_H
#include "date.h"
#include <cmath>

class maytinh 
{
protected:
	string hang;
	date d_m_y;
public:
	maytinh() : d_m_y(), hang(""){}
	maytinh(date a, string b): d_m_y(a), hang(b){}

	void setHang(string a){
		this -> hang =a;
	}
	void setD_M_Y( date a){
		this ->d_m_y =a;
	}

	string getHang(){
		return this -> hang;
	}
	date getD_M_Y(){
		this -> d_m_y;	
	}
	int getNamSanXuat(){
		return this -> d_m_y.getNam();
	}

	int getSoNamSuDung(int a){
		return  abs(a - this -> d_m_y.getNam() );
	}
};
#endif