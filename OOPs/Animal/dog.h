#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <string>

class Dog : public animal
{
protected:
public:
	Dog(): animal(""){}
	Dog(string a): animal(a){}

	void setName(string a){
		this -> name = a;
	}
	virtual void Speak()const {
		//What does the dog say ?
		cout<< "Gau Gau Gauuu\n";
	}
};
#endif