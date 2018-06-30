

class TaiKhoanVangLai
{
protected:

public:
	TaiKhoanVangLai();



	void GuiTien(int a){
		this -> SoDu +=a;
	}
	bool KiemTraSoDu(){
		return SoDu > 0;
	}
	
	void RutTien(int a){
		this -> SoDu -=a;
	}

};