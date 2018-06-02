#ifndef SACHKT_H
#define SACHKT_H
#include "sach.h"

class sachkinhte: public sach
{
protected:
	float giaNhap;
	float chietKhau;
public:
	sachkinhte(): sach(), giaNhap(0), chietKhau(0){}
	sachkinhte(string name, int nam, float heso, float a, float b)
	: sach(name, nam, heso),  giaNhap(a), chietKhau(b){}

	//setters
	void setGiaNhap(float _gianhap){
		this -> giaNhap = _gianhap;
	}
	void setChietKhau(float _chietkhau){
		this -> chietKhau = _chietkhau;
	}
	//getters
	float getGiaNhap(){
		return this -> giaNhap;
	}
	float getChietKhau(){
		return this -> chietKhau;
	}

	virtual float tinhGiaSach(){
		return this -> giaNhap * this -> heso - this -> chietKhau;
	}
	friend istream &operator >> (istream &in, sachkinhte &b){
		in>> b.name;
		in >>b.namXB;
		in>>b.heso;
		in >> b.giaNhap;
		in >>b.chietKhau;
		return in;
	}

};
#endif