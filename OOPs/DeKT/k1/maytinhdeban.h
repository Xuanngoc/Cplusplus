#ifndef MAYTINHDEBAN_H
#define MAYTINHDEBAN_H

#include "maytinh.h"

class maytinhdeban : public maytinh
{
protected:
	bool Case;
public:
	//maytinhdeban():  date(), hang(""), Case(true) {}
	
	maytinhdeban(date a, string c , bool b) : maytinh(a,c), Case(b){}

	

	void setCase(bool a){
		this -> Case =a;
	}

	float getCase(){
		return this -> Case ;
	}
	////
	
	
};
#endif