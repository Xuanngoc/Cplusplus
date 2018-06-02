/*Tạo lớp Hinhtru kế thừa từ lớp Hinhtron, lớp này có thêm dữ liệu là độ cao.
 Nạp chồng và định nghĩa thêm các phương thức cần thiết.*/
#include "Hinhtron.h"

class hinhtru : public hinhtron
{
protected:
	float chieuCao;
public:
	hinhtru(): chieuCao(0), hinhtron(0){}
	hinhtru(float a, float b): chieuCao(a), hinhtron(b){}
	//set
	void setChieuCao(float a){
		this -> chieuCao =a;
	}	
	//get
	float getChieuCao(){
		return this -> chieuCao;
	}
	float getTheTich(){
		return PI * this -> chieuCao * this -> banKinh* this -> banKinh;
	}
	float getDienTichXungQuanh(){
		return 2* PI* this -> banKinh * this->chieuCao;
	}
	float getDienTichToanPhan(){
		return 2* PI* this -> banKinh * (this -> banKinh + this -> chieuCao);
	}
	friend ostream &operator << (ostream & out,  hinhtru &b){
		out<<"Hinh tru tron co: \n";
		out<<"\t+Chieu cao: ";
		out<<b.chieuCao;
		out<<"\n\t+Ban kinh day: ";
		out<<b.banKinh;
		out<<"\n\t+The tich : ";
		out<<b.getTheTich();
		out<<"\n\t+Dien tich xung quanh: ";
		out<<b.getDienTichXungQuanh();
		out<<"\n\t+Dien tich toan phan: ";
		out<<b.getDienTichToanPhan();
		out<<"\n";
		return out;
	}
};


