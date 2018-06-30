# include <iostream>

class TaiKhoan
{
protected:
	long int SoTaiKhoan;
	float SoDu; 
public:
	TaiKhoan(): SoTaiKhoan(0), SoDu(0.0){}
	TaiKhoan(long int a, float b): SoTaiKhoan(a), SoDu(b){}
	//set
	void setSoTaiKhoan(long int a){
		this ->SoTaiKhoan =a;
	}		
	void setSoDu(float a){
		this -> SoDu =a;
	}
	//get
	long int getSoTaiKhoan(){
		return this -> SoTaiKhoan;
	}
	float getSoDu(){
		return this -> SoDu;
	}
	//
	virtual void GuiTien(int a)=0;
	
	virtual void RutTien(int a)=0;
	
	virtual bool KiemTraSoDu()=0;


};