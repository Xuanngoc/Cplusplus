#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;


class date
{
protected:
	int ngay;
	int thang;
	int nam;
public:
	date(): ngay(1), thang(1), nam(1){}
	date(int a, int b, int c) : ngay(a), thang(b), nam(c){}
	//
	void setNgay(int a){
		this-> ngay =a;
	}
	void setThang(int a){
		this -> thang =a;
	}
	void setNam(int a){
		this -> nam =a;
	}
	//
	int getNgay(){
		return this -> ngay;
	}
	int getThang(){
		return this -> thang;
	}
	int getNam(){
		return this -> nam;
	}
	friend ostream &operator << (ostream & out,  date &b){
		out<<b.getNgay();
		out<<"-";
		out<<b.getThang();
		out<<"-";
		out<<b.getNam();
		return out;
	}
};
#endif