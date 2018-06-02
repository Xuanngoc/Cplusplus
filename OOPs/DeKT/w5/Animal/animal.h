/*Xây dựng lớp Animal có dữ liệu là tên và các phương thức cơ bản
. Thêm phương thức Speak(). Xây dựng lớp Dog, 
Cat kế thừa từ Animal. Nạp chồng Speak().*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class animal{
protected:
	string name;
public:
	animal(): name(""){}
	animal(string a): name(a){}
	
	void setName(string a){
		this -> name =a;
	}
	string getName(){
		return this -> name;
	}
	string Speak(){
		return "animal animal animalllll";
	}



};
#endif