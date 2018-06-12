#ifndef SACHTH_H
#define SACHTH_H
#include "sach.h"

class sachtinhoc: public sach
{
protected:
	float giaNhap;
public:
	sachtinhoc(): sach(), giaNhap(0){}
	sachtinhoc(string ten, int nam,  float heso, float a): sach(ten, nam, heso), giaNhap(a){}
	///setter
	void setGiaTri(float _giaNhap ){
		this -> giaNhap = _giaNhap;
	}
	///getter
	float getGiaNhap(){
		return this -> giaNhap;
	}

	virtual float tinhGiaSach(){
		return this -> giaNhap * this -> heso;
	}
	friend istream &operator >> (istream &in, sachtinhoc &b){
		in>> b.name;
		in >>b.namXB;
		in>>b.heso;
		in >> b.giaNhap;
		
		return in;
	}
	friend ostream &operator <<(ostream &out, sachtinhoc b){
		out<<b.name<<"\t\t";
		out<<b.namXB<<"\t\t";
		out<<b.heso<<"\t\t";
		out<<b.giaNhap<<"\t\t";
		out<<b.tinhGiaSach()<<"\t\t\n";
		return out;
	}

};
#endif