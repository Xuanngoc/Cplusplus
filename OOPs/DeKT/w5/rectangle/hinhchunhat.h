/*Cài đặt đầy đủ lớp Điểm và lớp Hinhchunhat. 
Thêm cấu tử khởi tạo Hinhchunhat từ hai điểm và cấu tử sao chép. 
Thêm phương thức tính giao của 2 hình chữ nhật, 
kiểm tra một điểm có nằm trong hình chữ nhật hay không (quá tải phương thức này). 
Viết chương trình nhập một hình chữ nhật, sau đó phát sinh 100 điểm ngẫu nhiên
và cho biết có bao nhiêu điểm nằm trong hình chữ nhật đã nhập.
Viết chương trình nhập vào 3 hình chữ nhật và tính giao đôi một của các hình này.*/
#include "Point.h"
#include <iostream>
using namespace std;

class Hinhchunhat{
protected:
	float chieuDai, chieuRong;
	point topLeft, botRight;
public:
	Hinhchunhat(): chieuDai(0), chieuRong(0){}
	Hinhchunhat(float a, float b): chieuDai(a), chieuRong(b){}
	Hinhchunhat(point a, point b){
		// xem canh nao la chieu dai || chieu rong
		float d = a.getOX_A_B(b) > a.getOY_A_B(b) ?  a.getOX_A_B(b): a.getOY_A_B(b);
		float r = a.getOX_A_B(b) < a.getOY_A_B(b) ?  a.getOX_A_B(b): a.getOY_A_B(b) ;
		this -> topLeft =a;
		this ->botRight =b;
		this -> chieuDai = d;
		this -> chieuRong = r;
	}
	//set 
	void setDai(float a){
		this -> chieuDai =a;
	}
	void setRong(float a){
		this -> chieuRong =a;
	}
	void setopLeftopleft( point a){
		this -> topLeft =a;
	}
	void setBotRight(point a){
		this -> botRight;
	}
	//get
	float getDai( ){
		return this -> chieuDai;
	}
	float getRong(){
		return this -> chieuRong;
	}
	point getopLeftopLeft(){
		return this -> topLeft;
	}
	point getBotRight(){
		return this -> botRight;
	}
	float getDientich(){
		return this -> chieuDai * this -> chieuRong;
	}
	float getChuvi(){
		return this -> chieuRong *2 + this -> chieuDai *2;
	}
	
	bool belong_to(const point &b)const{
		float xMin = topLeft.getX() > botRight.getX()? botRight.getX() : topLeft.getX();
		float xMax = topLeft.getX() > botRight.getX()? topLeft.getX() : botRight.getX();
		float yMin = topLeft.getY() > botRight.getY()? botRight.getY():topLeft.getY();
		float yMax = topLeft.getY() > botRight.getY()? topLeft.getY() : botRight.getY();
		
		return ((b.getX() >= xMin && b.getX() <= xMax ) && (b.getY() >= yMin && b.getY()<=yMax )) ;
	}	
	Hinhchunhat Giao(  Hinhchunhat b)const{
		point TL( b.getBotRight().getX() - botRight.getX() , b.getopLeftopLeft().getY() - botRight.getY());
		point BR(  botRight.getX() ,  b.getBotRight().getY());
		
		Hinhchunhat kq (TL, BR);
		return kq;
	}
	friend istream &operator >> ( istream &in,  Hinhchunhat &b){
		cout<<"Nhap top left x/y: ";
		in >> b.topLeft;
		cout<<"Nhap bot right x/y: ";
		in >> b.botRight;
		return in;
	}
	friend ostream &operator << (ostream & out, Hinhchunhat &b){
		out<<"\t+ Chieu dai = "<<b.chieuDai;
		out<<"\n\t+ Chieu rong = "<<b.chieuRong;
		out<<"\n\t+ Dien tich = "<<b.getDientich();
		out<<"\n\t+ Chu vi = "<<b.getChuvi()<<endl;
		return out;
	}
};
