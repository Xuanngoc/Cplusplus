#ifndef SACH_H
#define SACH_H
#include <iostream>
using namespace std;

class sach
{
protected:
	string name;
	int namXB;
	float heso;
public:
	sach(): name(""), namXB(0), heso(0.0){}
	sach(string _name, int _namXB, float _heso): name(_name), namXB(_namXB), heso(_heso){}
	///setters
	void setName(string _name){
		this -> name = _name;
	}
	void setNamXB(int _namXB){
		this -> namXB = _namXB;
	}
	void setHeSo(float _heso){
		this -> heso = _heso;
	}
	//getters
	string getName()const{
		return this -> name;
	}
	int getNamXB()const{
		return this -> namXB;
	}
	float getHeSo()const{
		return this -> heso;
	}

	////
	virtual float tinhGiaSach()=0;
	friend ostream &operator << (ostream & out,  sach &b){
		out<<"Ten sach: "<<b.name;
		out<<"\nNam xuat ban: "<<b.namXB;
		out<<"\nGia : "<<b.tinhGiaSach()<<endl;
		return out;
	}	
	
};
#endif