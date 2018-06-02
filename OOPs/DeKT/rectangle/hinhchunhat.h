#include "Point.h"
#include <iostream>
using namespace std;

void bsort(float a[]){
	for(int i=0; i<4; i++){
		for(int k=0; k<4; k++){
			if(a[i] > a[k]){
				float  temp =a[i];
				a[i] =a[k];
				a[k] = temp;
			}
		}
	}

}


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
		//cout<<d<<"  "<<r<<endl;
		this -> topLeft = a;
		this -> botRight = b;
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
	void setTopLeft( point a){
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
	point getTopLeft(){
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
	/*Hinhchunhat Giao(  Hinhchunhat b)const{
		point TL( b.getBotRight().getX() - botRight.getX() , b.getTopLeft().getY() - botRight.getY());
		point BR(  botRight.getX() ,  b.getBotRight().getY());
		
		Hinhchunhat kq (TL, BR);
		return kq;
	}*/
	/*
	Hinhchunhat Giao( Hinhchunhat b){
		
		
			point a = b.getTopLeft();
			point a1 = this -> botRight;
			Hinhchunhat kq(a, a1);
			cout<<a1;
			return kq;
			
	}*/

	Hinhchunhat Giao(Hinhchunhat b){
		float OX[4] ={ b.botRight.getX(), b.topLeft.getX() , this -> topLeft.getX(), this -> botRight.getX()};
		float OY[4] ={ b.botRight.getY(), b.topLeft.getY() , this -> topLeft.getY(), this -> botRight.getY()};
		bsort(OX);
		bsort(OY);
		point a(OX[2], OY[1] ), t(OX[1], OY[2]);

		//cout<<a<<t;
		return Hinhchunhat( a,t );

	}		
	friend istream &operator >> ( istream &in,  Hinhchunhat &b){
		cout<<"Nhap top left x/y: ";
		in >> b.topLeft;
		cout<<"Nhap bot right x/y: ";
		in >> b.botRight;
		return in;
	}
	friend ostream &operator << (ostream & out,  Hinhchunhat &b){
		out<<"\t+ Chieu dai = "<<b.chieuDai;
		out<<"\n\t+ Chieu rong = "<<b.chieuRong;
		out<<"\n\t+ Top left = "<<b.topLeft;
		out<<"\t+ Bot Right = "<<b.botRight;

		out<<"\t+ Dien tich = "<<b.getDientich();
		out<<"\n\t+ Chu vi = "<<b.getChuvi()<<endl;
		return out;
	}
};
