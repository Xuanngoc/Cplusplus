#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <string>

class Dog : public animal
{
protected:
public:
	Dog(){
		this -> name = "";
	}
	Dog(string a){
		this -> name =a;
	}
	void setName(string a){
		this -> name = a;
	}
	string Speak(){
		return "Gau Gau Gauuu\n";
	}
};
#endif