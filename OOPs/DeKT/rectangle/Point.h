#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>
using namespace std;

class point
{
protected:
	float X, Y;
public:
	point():X(0), Y(0){}
	point(float a, float b): X(a), Y(b){}
	//setxy
	void setXY(float a, float b){
		this -> X =a;
		this ->Y =b;
	} 
	void setX(float a){
		this -> X =a;
	}
	void setY(float a){
		this -> Y =a;
	}
	//getXY
	float getX()const{
		return this -> X;
	}
	float getY()const{
		return this -> Y;
	}
	float getOX_A_B(const point &b)const{
		return abs(this -> X - b.getX() );
	}
	float getOY_A_B(const point &b)const{
		return abs(this -> Y - b.getY() );
	}
	friend ostream &operator << (ostream &out, point &b){
		out<<"("<<b.getX()<<", "<<b.getY()<<")\n";
		return out;
	} 
	friend istream & operator >> (istream &in, point &b){
		in>>b.X;
		in>>b.Y;
		return in;
	} 

};
#endif