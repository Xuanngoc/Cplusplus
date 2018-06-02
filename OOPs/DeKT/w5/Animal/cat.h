#ifndef CAT_H
#define CAT_H

#include "animal.h"

class Cat : public animal
{
protected:

public:
	Cat(){
		this -> name = "";	
	} 
	Cat(string a){
		this-> name =a;
	}	 
	void setName(string a){
		this -> name = a;
	}
	string Speak(){
		return "Meow meow meowwww\n";
	}
};
#endif