#include <iostream>
using namespace std;

class Employee
{
protected:
	string Fulname;
	int NamSinh;
	int CMND;
	int LuongCB;
	int SoNgayCong;
	string DonViCongTac;
public:
	Employee(): Fulname(""), NamSinh(0), CMND(0), LuongCB(0), SoNgayCong(0), DonViCongTac(""){}
	Employee(string a, int b, int c, int d, int e, string f):
		Fulname(a), NamSinh(b), CMND(c), LuongCB(d), SoNgayCong(e), DonViCongTac(f){}

	//setters
	void setFulname(string a){
		this -> Fulname =a;
	}	
	void setNamSinh(int a){
		this -> NamSinh =a;
	}	
	void setCMND(int a){
		this -> CMND =a;
	}
	void setLuongCB(int a){
		this -> LuongCB =a;
	}
	void setSoNgayCong(int a){
		this -> SoNgayCong =a;
	}
	void setDonViCongTac(int a){
		this -> DonViCongTac =a;
	}
	//getters
	string getFullName(){
		return this ->Fulname; 
	}
	int getNamSinh(){
		return this -> NamSinh;
	}
	int getCMND(){
		return this -> CMND;
	}
	int getLuongCB(){
		return this -> LuongCB;
	}
	int getSoNgayCong(){
		return this -> SoNgayCong;
	}
	string getDonViCongTac(){
		return this -> DonViCongTac;
	}
	///
	int TinhLuong(){
		return this -> LuongCB * (this -> SoNgayCong % 27);
	}
	void HienThi(){
		cout<<this -> Fulname<<"\t"<<this -> NamSinh<<"\t"<<this -> TinhLuong()<<"\t"<<this -> DonViCongTac<<endl;


	}
	friend ostream &operator << (ostream & out, Employee &b){
		out<<b.Fulname<<"\t\t"<<b.NamSinh<<"\t"<<b.CMND<<"\t"<<b.TinhLuong()<<"\t"<<b.DonViCongTac<<endl;
	}
	friend istream &operator >> (istream & in, Employee &b){
		cout<<"Nhap ho ten: ";
		cin.ignore(256, '\n');
		getline(in,b.Fulname);
		cout<<"Nhap Nam sinh: ";
		in >> b.NamSinh;
		cout<<"Nhap CMND: ";
		in >> b.CMND;
		cout<<"Nhap Luong co ban: ";
		in >>b.LuongCB;
		cout<<"Nhap So ngay cong: ";
		in >>b.SoNgayCong;
		cout<<"Nhap Don vi cong tac: ";
		in >> b.DonViCongTac;
		return in;
	}

	//~Employee();
	
};