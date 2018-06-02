/*Tạo lớp Hinhtru kế thừa từ lớp Hinhtron, lớp này có thêm dữ liệu là độ cao.
 Nạp chồng và định nghĩa thêm các phương thức cần thiết.*/
#ifndef HINHTRON_H
#define HINHTRON_H

#include <iostream>
using namespace std;
#define PI 3.141592653589793238462643383279502884197169
class hinhtron
{
protected:
	float banKinh;
public:
	hinhtron(): banKinh(0){}
	hinhtron( float a): banKinh(a){}
	//setters
	void setBanKinh(float a){
		this -> banKinh =a;
	}
	//getters
	float getBankinh(){
		return this -> banKinh;
	}
	float getChuvi(){
		return 2 * this -> banKinh * PI ;
	}
	float getDientich(){
		return this -> banKinh * this -> banKinh * PI;
	}

	
};
#endif
