#ifndef MAYTINHXACHTAY_H
#define MAYTINHXACHTAY_H
#include "maytinh.h"

class maytinhxachtay : public maytinh
{
protected:
	float  khoiluong;
public:
	maytinhxachtay(): maytinh(date(), ""), khoiluong(0){}
	maytinhxachtay(date a, string c,  float b) : maytinh(a, c), khoiluong(b){}
	

	///
	void setKhoiLuong(float a){
		this -> khoiluong =a;
	}

	float getKhoiLuong(){
		return this -> khoiluong ;
	}
	
};
#endif