#include <iostream>
#include <string>
using namespace std;

class sanpham
{
protected:
	string MaSanPham;
	string TenSanPham;
	string LoaiSanPham;
public:
	sanpham(): MaSanPham(""), TenSanPham(""), LoaiSanPham(""){}
	sanpham(string _MaSanPham, string _TenSanPham, string _LoaiSanPham)
	 : MaSanPham(_MaSanPham), TenSanPham(_TenSanPham), LoaiSanPham(_LoaiSanPham){}
	///set
	void setMaSanPham(string _MaSanPham){
		this -> MaSanPham = _MaSanPham;
	} 
	void setTenSanPham(string _TenSanPham){
		this -> TenSanPham = _TenSanPham;
	}
	//get
	string getMaSanPham(){
		return this -> MaSanPham;
	}
	string getTenSanPham(){
		return this-> TenSanPham;
	}
	string getLoaiSanPham(){
		return this -> LoaiSanPham;
	}

	virtual int TinhGiaSanPham() =0 ;
	virtual void Print() {}
};