#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public animal
{
protected:

public:
	Cat(): animal(""){}
	Cat(string a): animal(a){}

	void setName(string a){
		this -> name = a;
	}
	virtual void Speak()const{
		//What does the cat say ? 
		cout<< "Meow meow meowwww\n";
	}
};
#endif