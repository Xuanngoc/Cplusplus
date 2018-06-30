#include "TaiKhoan.h"

class TaiKhoanTietKiem : public TaiKhoan
{
protected:
	float LaiSuat;
public:
	TaiKhoanTietKiem() : TaiKhoan(), LaiSuat(0) {}
	//TaiKhoanTietKiem(TaiKhoan a, float b): TaiKhoan(TaiKhoan), LaiSuat(b) {}
	//set
	void setLaiSuat(float a){
		this -> LaiSuat =a;
	}
	//get
	float getLaiSuat(){
		return this -> LaiSuat;
	}
	void GuiTien(int a){
		this -> SoDu +=a;
	}
	bool KiemTraSoDu(){
		return SoDu > 0;
	}
	
	void RutTien(int a){
		if(KiemTraSoDu()){
			this -> SoDu -=a;
		}
	}
};